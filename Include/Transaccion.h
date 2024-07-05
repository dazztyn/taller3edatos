#pragma once
#include <iostream>
using namespace std;


class Transaccion{
private:
    int id; 
    string cuentaOrigen, cuentaDestino;
    int monto;
    string ubicacion;
    string fecha,hora;

public:

    Transaccion(int,string,string,int,string,string,string);
    ~Transaccion();

    int getID();
    string getCtaDestino();
    string getCtaOrigen();
    int getMonto();
    string getUbicacion();
    string getFecha();
    string getHora();
};