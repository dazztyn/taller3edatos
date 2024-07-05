#include "Transaccion.h"


Transaccion::Transaccion(int id, string cuentaOrigen, string cuentaDestino, int monto, string ubicacion, string fecha, string hora){

    this -> id = id;
    this -> cuentaOrigen = cuentaOrigen;
    this -> cuentaDestino = cuentaDestino;
    this -> monto = monto;
    this -> ubicacion = ubicacion;
    this -> fecha = fecha;
    this -> hora = hora;



}