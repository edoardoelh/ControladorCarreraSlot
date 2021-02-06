/*
  ControladorContador.h - Libreria que gestiona 
  las vueltas realizadas por el coche.
  Creado por Edgar Lopez Herrera, Febrero, 2021.
*/
#ifndef ControladorContador_h
#define ControladorCOntador_h

class ControladorContador
{
    public:
    ControladorContador();
    void imprimirDatos();
    static void sumarVuelta();

    private:
    bool permitirEnvioDatos;
    int numVueltas;
    long millisInicioVuelta;

    void calcularTiempoVuelta(long millisActual);
    
};

#endif