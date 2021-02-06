//Configuracion de pines de la placa arduino nano

class Nano
{
    private:
    static Nano nano;
    const int BtTx = 10;
    const int BtRx = 11;


    const int pinSensores[2] = { 2, 3};

    public:

    static int getNumSensores(){
        return sizeof(pinSensores);
    }

    /**
     * Funcion que devuelve el numero de pin que ocupa el sensor
     * 
     * numSensor: Numero del 0 al getNumSensores()-1
     **/ 
    static int getSensor(int numSensor){
        return nano.pinSensores[numSensor];
    }
};
