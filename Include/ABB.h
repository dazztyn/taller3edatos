#pragma once
#include "Nodo.h"

class ABB {
private:
    Nodo* raiz;

    Nodo* insertarRec(Nodo* nodo, Transaccion* trans);
    //void inOrden(Nodo* nodo);
    //void preOrden(Nodo* nodo);
    //void postOrden(Nodo* nodo);
    //void eliminarArbol(Nodo* nodo);
    void detectarFraudeRec(Nodo* nodo, int monto_limite);

public:
    ABB(Nodo*);
    ~ABB();

    void insertar(Transaccion* trans);
    //void inOrden();
    void detectarFraude(int monto_limite);
    void destruir(Nodo* nodo);

};