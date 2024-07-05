#pragma once
#include "Nodo.h"

class ABB {
private:
    Nodo* raiz;

    void insertar(Nodo*& nodo, Transaccion* trans);
    void inOrden(Nodo* nodo);
    void preOrden(Nodo* nodo);
    void postOrden(Nodo* nodo);
    void eliminarArbol(Nodo* nodo);

public:
    ABB(Nodo*);
    ~ABB();

    void insertar(Transaccion* trans);
    void inOrden();
};