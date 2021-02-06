#include "../../libraries/controladorContador/ControladorContador.h"
#include "../Configuracion.h"
#include "Nano.h"
#include "Uno.h"

#ifndef ConfiguracionPlacas_h
#define ConfiguracionPlacas_h

class ConfiguracionPLacas
{
public:
    static void configurarInterrupciones()
    {
        switch (Placa)
        {
        case BoardNano:
            configurarNano();
            break;
        case BoardMiniPro:

            break;
        case BoardMega:

            break;
        case BoardLeonardo:

            break;
        case BoardDue:

            break;
        }
    }

private:
    static ControladorContador controladorContador[];

    static void configurarNano()
    {
        int numSensores = Nano::getNumSensores();
        if (numSensores >= Sensores && Sensores > 0)
        {
            establecerEscuchadorNano(numSensores);
        }
        else
        {
            establecerEscuchadorNano(1);
        }

    }

    static void configurarUno()
    {
    }

    static void establecerEscuchadorNano(int numSensores)
    {
        controladorContador[numSensores];
        for (size_t i = 0; i < numSensores; i++)
        {
            controladorContador[i] = ControladorContador();
            attachInterrupt(digitalPinToInterrupt(2), controladorContador[i].sumarVuelta, RISING);
        }
    }
};

#endif