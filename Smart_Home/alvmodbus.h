#ifndef ALVMODBUS_H
#define ALVMODBUS_H

#include <QModbusTcpClient>
#include <QObject>
#include <QTimer>
#include <QString>
#include <QList>

class AlvModbus  : public QObject
{
    Q_OBJECT
public:
    AlvModbus(QObject *parent = nullptr);


    enum RegisterType {
        Invalid,
        DiscreteInputs,
        Coils,
        InputRegisters,
        HoldingRegisters
    };

public slots:
    //connection
    void connectDevice();
    void disconnectDevice();
    //slider example (delete after test)
    void writeSingleHolRegister(int add, int val);
    void writeRegisterRequest(int start_address,int lenght,int value,int type,int server_address);
    //charts
    void readQueryChart1();
    void readQueryChart2();
    void readQueryChart3();
    void readReadyChart1();
    void readReadyChart2();
    void readReadyChart3();

    //discrete inputs
    void readDisInputStandbyBtn();
    void readDisInputStandbyBtnReceived();

    //coils
    void writeSingleCoil(int add, int s_add, bool val);
    void writeSinCoil(int add, int s_add, bool val);
    void readHolTem_Btn();
    void readHolTem_BtnReceived();
    void readHolHum_Btn();
    void readHolHum_BtnReceived();
    void readCoilLockBtn();
    void readCoilLockBtnReceived();
    void readCoilLight1_Btn();
    void readCoilLight1_BtnReceived();
    void readCoilLight2_Btn();
    void readCoilLight2_BtnReceived();
    void readCoilLight3_Btn();
    void readCoilLight3_BtnReceived();
    void readCoilLight2_1_Btn();
    void readCoilLight2_1_BtnReceived();
    void readCoilLight2_2_Btn();
    void readCoilLight2_2_BtnReceived();
    void readCoilLight2_3_Btn();
    void readCoilLight2_3_BtnReceived();
    void readCoilLight2_4_Btn();
    void readCoilLight2_4_BtnReceived();
    void readCoilLight3_1_Btn();
    void readCoilLight3_1_BtnReceived();
    void readCoilLight3_2_Btn();
    void readCoilLight3_2_BtnReceived();
    void readCoilLight3_3_Btn();
    void readCoilLight3_3_BtnReceived();
    void readSingleCoil( int add, int s_add);
    void readSingleCoilReceived();
    int readSinCoil( int add, int s_add);
    void readSinCoilReceived();
    //void readSingleCoilCompleted(QString id, int value);

    //holding registers
    void readHRegOxygenBtn();
    void readHRegOxygenBtnReceived();

    //other slots
    void connectChartsFromTimer();
    void disconnectChartsFromTimer();


signals:
    //charts
    void signalSendedChart1(int value);
    void signalSendedChart2(int value);
    void signalSendedChart3(int value);

    //discrete input
    void readDisInputStandbyBtnCompleted(QString value);

    //coils
    void readCoilLockBtnCompleted(QString value);
    void readHolTem_BtnCompleted(QString value);
    void readHolHum_BtnCompleted(QString value);
    void readCoilLight1_BtnCompleted(QString value);
    void readCoilLight2_BtnCompleted(QString value);
    void readCoilLight3_BtnCompleted(QString value);
    void readCoilLight2_1_BtnCompleted(QString value);
    void readCoilLight2_2_BtnCompleted(QString value);
    void readCoilLight2_3_BtnCompleted(QString value);
    void readCoilLight2_4_BtnCompleted(QString value);
    void readCoilLight3_1_BtnCompleted(QString value);
    void readCoilLight3_2_BtnCompleted(QString value);
    void readCoilLight3_3_BtnCompleted(QString value);
    void readSingleCoilCompleted(QString value);
    void readSinCoilCompleted(QString value);


    //holding registers
    void readHRegOxygenBtnCompleted(int value);
//    void readSingleCoil(QString id, int add, int s_add);
//    void readSingleCoilReceived();
//    void readSingleCoilCompleted(QString id, int value);


private:
    QModbusTcpClient modbus_device;
    QTimer *timer;
    QString qml_element_id;
};

#endif // ALVMODBUS_H

/*
    void readSingleDiscreteInput(int add, int s_add);
    void readSingleDiscreteInputRecieved();
    void readSingleCoil(QString id, int add, int s_add);
    void readSingleCoilReceived();
    void readSingleCoilCompleted(QString id, int value);
    //discrete inputs
    void readSingleDiscreteCompleted(int value);
*/
