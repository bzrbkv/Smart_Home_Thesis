#include "alvmodbus.h"
#include <QUrl>
#include <QDebug>
#include <iostream>
#include<string>


AlvModbus::AlvModbus(QObject *parent) : QObject(parent)
{
    connectDevice();
    timer = new QTimer(this);
    timer->setInterval(300);
    //readHolTem_Btn()
    connect(timer,SIGNAL(timeout()),this,SLOT(readHolTem_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLockBtn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight1_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight2_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight3_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight2_1_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight2_2_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight2_3_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight2_4_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight3_1_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight3_2_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readCoilLight3_3_Btn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readHRegOxygenBtn()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readSingleCoil( int add, int s_add)));
    timer->start();
}

void AlvModbus::connectDevice()
{
    modbus_device.setConnectionParameter(QModbusDevice::NetworkAddressParameter,"192.168.88.68");
    //modbus_device.setConnectionParameter(QModbusDevice::NetworkAddressParameter,"127.0.0.1");
    modbus_device.setConnectionParameter(QModbusDevice::NetworkPortParameter,502);
    modbus_device.connectDevice();
    modbus_device.setNumberOfRetries(3);
    modbus_device.setTimeout(1000);
}

void AlvModbus::disconnectDevice()
{
    modbus_device.disconnectDevice();
}

void AlvModbus::connectChartsFromTimer(){
    connect(timer,SIGNAL(timeout()),this,SLOT(readQueryChart1()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readQueryChart2()));
    connect(timer,SIGNAL(timeout()),this,SLOT(readQueryChart3()));
}

void AlvModbus::disconnectChartsFromTimer(){
    disconnect(timer,SIGNAL(timeout()),this,SLOT(readQueryChart1()));
    disconnect(timer,SIGNAL(timeout()),this,SLOT(readQueryChart2()));
    disconnect(timer,SIGNAL(timeout()),this,SLOT(readQueryChart3()));
}

void AlvModbus::readReadyChart1() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();

    //qDebug()<<"address 40001, value "<<result.value(0);
    emit signalSendedChart1(result.value(0));// emits value of register,signal handled in qml
}

void AlvModbus::readReadyChart2() {
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result = reply->result();

    //qDebug()<<"address 40002 value "<<result.value(0);
    emit signalSendedChart2(result.value(0));// emits value of register,signal handled in qml
}

void AlvModbus::readReadyChart3() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();

    //qDebug()<<"address 40003, value "<<result.value(0);
    emit signalSendedChart3(result.value(0));// emits value of register,signal handled in qml
}

void AlvModbus::readQueryChart1(){
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters, 0, 5000);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readReadyChart1);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

void AlvModbus::readQueryChart2(){
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,1,1 );

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readReadyChart2);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

void AlvModbus::readQueryChart3(){
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,2,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readReadyChart3);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

void AlvModbus::writeSingleHolRegister(int add, int val){
    QModbusDataUnit writeUnit(QModbusDataUnit::HoldingRegisters/* register type */,add,1);

    writeUnit.setValue(0, val);

    if (auto *reply = modbus_device.sendWriteRequest(writeUnit, 1))
    {
        if (!reply->isFinished()){
            connect(reply, &QModbusReply::finished, this, [reply](){
                if (reply->error() != QModbusDevice::NoError)
                    // error in reply
                    reply->deleteLater();
            });
        }
        else{
            if (reply->error() != QModbusDevice::NoError)
                reply->deleteLater();
        }
    }
    else{
        // error in request
    }
}

void AlvModbus::writeRegisterRequest(int start_address,int length,int value,int type,int server_address)
{
    QModbusDataUnit write_dataUnit(static_cast<QModbusDataUnit::RegisterType>(type),start_address,static_cast<uint>(length));
    uint i;
    for(i=0;i<write_dataUnit.valueCount();i++){
        write_dataUnit.setValue(i,value);
    }
    modbus_device.sendWriteRequest(write_dataUnit,server_address);
}

//standby indicator
void AlvModbus::readDisInputStandbyBtn() {
    QModbusDataUnit readUnit(QModbusDataUnit::DiscreteInputs/* register type */,0,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readDisInputStandbyBtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int a = 2;
void AlvModbus::readDisInputStandbyBtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != a){
        if (b == 1){
            emit readDisInputStandbyBtnCompleted("on");
        }else if (b == 0){
            emit readDisInputStandbyBtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    a = b;
}



//lockButton
void AlvModbus::readCoilLockBtn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/* register type */,1,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLockBtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z = 2;
void AlvModbus::readCoilLockBtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z){
        if (b == 1){
            emit readCoilLockBtnCompleted("on");
        }else if (b == 0){
            emit readCoilLockBtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z = b;
}


//Temperature
void AlvModbus::readHolTem_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,15000,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readHolTem_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

QString tem;
void AlvModbus::readHolTem_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    tem=QString::number(b);
    emit readHolTem_BtnCompleted(tem);
}


//Humidity
void AlvModbus::readHolHum_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,15001,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readHolHum_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z1 = 2;
void AlvModbus::readHolHum_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z1){
        if (b == 1){
            emit readHolHum_BtnCompleted("on");
        }else if (b == 0){
            emit readHolHum_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z1 = b;
}

//light1
void AlvModbus::readCoilLight1_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/*HoldingRegisters*//* register type */,1,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight1_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int hum = 2;
void AlvModbus::readCoilLight1_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != hum){
        if (b == 1){
            emit readCoilLight1_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight1_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    hum = b;
}

//light2
void AlvModbus::readCoilLight2_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,6001,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight2_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z2 = 2;
void AlvModbus::readCoilLight2_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z2){
        if (b == 1){
            emit readCoilLight2_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight2_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z2 = b;
}

//light3
void AlvModbus::readCoilLight3_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,6002,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))//1 is slave address
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight3_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z3 = 2;
void AlvModbus::readCoilLight3_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z3){
        if (b == 1){
            emit readCoilLight3_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight3_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z3 = b;
}

//light2_1
void AlvModbus::readCoilLight2_1_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters/* register type */,6003,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight2_1_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z2_1 = 2;
void AlvModbus::readCoilLight2_1_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z2_1){
        if (b == 1){
            emit readCoilLight2_1_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight2_1_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z2_1 = b;
}

//light2_2
void AlvModbus::readCoilLight2_2_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils,5 ,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight2_2_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z2_2 = 2;
void AlvModbus::readCoilLight2_2_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z2_2){
        if (b == 1){
            emit readCoilLight2_2_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight2_2_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z2_2 = b;
}

//light2_3
void AlvModbus::readCoilLight2_3_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/* register type */,6,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight2_3_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z2_3 = 2;
void AlvModbus::readCoilLight2_3_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z2_3){
        if (b == 1){
            emit readCoilLight2_3_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight2_3_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z2_3 = b;
}

//light2_4
void AlvModbus::readCoilLight2_4_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/* register type */,7,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight2_4_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z2_4 = 2;
void AlvModbus::readCoilLight2_4_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z2_4){
        if (b == 1){
            emit readCoilLight2_4_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight2_4_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z2_4 = b;
}

//light3_1
void AlvModbus::readCoilLight3_1_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/* register type */,8,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight3_1_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z3_1 = 2;
void AlvModbus::readCoilLight3_1_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z3_1){
        if (b == 1){
            emit readCoilLight3_1_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight3_1_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z3_1 = b;
}

//light3_2
void AlvModbus::readCoilLight3_2_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/* register type */,9,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight3_2_BtnReceived);
        }
        else
        {
            delete reply;
        }
    }
    else
    {
        // error in request
    }
}

int z3_2 = 2;
void AlvModbus::readCoilLight3_2_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z3_2){
        if (b == 1){
            emit readCoilLight3_2_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight3_2_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z3_2 = b;
}

//light3_3
void AlvModbus::readCoilLight3_3_Btn() {
    QModbusDataUnit readUnit(QModbusDataUnit::Coils/* register type */,10,1);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))
    {
        if (!reply->isFinished())
        {
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readCoilLight3_3_BtnReceived);
        }
        else
        {
            delete reply; // broadcast replies return immediately
        }
    }
    else
    {
        // error in request
    }
}

int z3_3 = 2;
void AlvModbus::readCoilLight3_3_BtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    int b = result.value(0);
    if(b != z3_3){
        if (b == 1){
            emit readCoilLight3_3_BtnCompleted("on");
        }else if (b == 0){
            emit readCoilLight3_3_BtnCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    z3_3 = b;
}



//alarmPopup
void AlvModbus::readHRegOxygenBtn(){
    QModbusDataUnit readUnit(QModbusDataUnit::HoldingRegisters,
                             3/*40004*/,
                             1/*read 1 reg*/);

    if (auto *reply = modbus_device.sendReadRequest(readUnit,1))/*1 slave address*/
    {
        if (!reply->isFinished())
        {
            // connect the finished signal of the request to your read slot
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readHRegOxygenBtnReceived);
        }
        else
        {
            delete reply; // broadcast replies return immediately
        }
    }
    else
    {
        // error in request
    }
}
void AlvModbus::readHRegOxygenBtnReceived() {
    QModbusReply *reply=qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result=reply->result();
    emit readHRegOxygenBtnCompleted(result.value(0));
}

//common coil write function
void AlvModbus::writeSingleCoil(int add, int s_add, bool val){
    QModbusDataUnit writeUnit(QModbusDataUnit::Coils,add,1);
    writeUnit.setValue(0, val);
    QModbusReply *reply;
    reply = modbus_device.sendWriteRequest(writeUnit,s_add);

    if (reply == nullptr) {
        qDebug() << "error in write request, nothing writed";
    }
}



void AlvModbus::writeSinCoil(int add, int s_add, bool val){
    QModbusDataUnit writeUnit(QModbusDataUnit::Coils,add,1);
    writeUnit.setValue(0, val);
    QModbusReply *reply;
    reply = modbus_device.sendWriteRequest(writeUnit,s_add);

    if (reply == nullptr) {
        qDebug() << "error in write request, nothing writed";
    }
}


int m;
void AlvModbus::readSingleCoil( int add, int s_add){
    QModbusDataUnit readUnit(QModbusDataUnit::Coils,add,1);
    if (auto *reply = modbus_device.sendReadRequest(readUnit,s_add)) {
        if (!reply->isFinished()) {
            qml_element_id = "on";
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readSingleCoilReceived);
        }
        else {
            if (reply->error() != QModbusDevice::NoError) {
                // error in reply
                reply->deleteLater();
                qDebug() << "error in reply";
            }
        }
    }else {
        // error in request
        qDebug() << "error in request";
    }
    //return m;
}
int ka=2;
void AlvModbus::readSingleCoilReceived(){
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result = reply->result();
    m=result.value(0);
    //emit readSingleCoilCompleted(qml_element_id, result.value(0));

//    int b = result.value(0);
    if(m != ka){
        if (m == 1){
            emit readSingleCoilCompleted("on");
        }else if (m == 0){
            emit readSingleCoilCompleted("off");
        }else {
            qDebug()<<"Error";
        }
    }
    ka = m;
}


int y;
int AlvModbus::readSinCoil( int add, int s_add){
    QModbusDataUnit readUnit(QModbusDataUnit::Coils,add,1);
    if (auto *reply = modbus_device.sendReadRequest(readUnit,s_add)) {
        if (!reply->isFinished()) {
            qml_element_id = "on1";
            connect(reply, &QModbusReply::finished,this,&AlvModbus::readSingleCoilReceived);
        }
        else {
            if (reply->error() != QModbusDevice::NoError) {
                // error in reply
                reply->deleteLater();
                qDebug() << "error in reply";
            }
        }
    }else {
        // error in request
        qDebug() << "error in request";
    }
    return y;
}

int ya=2;
void AlvModbus::readSinCoilReceived(){
    QModbusReply *reply = qobject_cast<QModbusReply *>(sender());
    const QModbusDataUnit result = reply->result();
    y=result.value(0);
    //emit readSingleCoilCompleted(qml_element_id, result.value(0));

//    int b = result.value(0);
    if(y != ya){
        if (y == 1){
            emit readSingleCoilCompleted("on1");
        }else if (y == 0){
            emit readSingleCoilCompleted("off1");
        }else {
            qDebug()<<"Error";
        }
    }
    ya = y;
}

