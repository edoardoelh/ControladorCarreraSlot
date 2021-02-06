

/**
 *  Configuracion del controlador de carreras para coches slot
**/


//Define el numero de sensores conectados
/**
 * Num sensores por placa:
 * Uno:       Max 2
 * Nano:      Max 2
 * Mini pro:  Max 2
 * Mega:      Max 6
 * Leonardo:  Max 5
 * Due:       Max 6 
 * (La placa Due permite mas pines que los 6 maximos pero se ha 
 *  establecido un maximo de 6 coches en pista)
 **/
//:[1,2,3,4,5,6]
#define Sensores 2


#include "Placas.h"

/**
 * Define la placa para la configuracion de pines.
 * Se puede cambiar los pines en los ficheros de la carpeta "src/pins"
 * Nombre de placas disponible en el fichero "src/boards.h"
**/
#ifndef Placa
    #define Placa BoardNano
#endif