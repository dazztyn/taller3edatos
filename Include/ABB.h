#pragma once
#include "Nodo.h"

class ABB {
private:
    Nodo* raiz;

    Nodo* insertarRec(Nodo*, Transaccion*);
    //void inOrden(Nodo* nodo);
    //void preOrden(Nodo* nodo);
    //void postOrden(Nodo* nodo);
    //void eliminarArbol(Nodo* nodo);
    void detectarFraudeRec(Nodo*, int);

public:
    ABB();
    ~ABB();

    void insertar(Transaccion*);
    //void inOrden();
    void detectarFraude(int);
    void procesarFraude();
    void destruir(Nodo*);

};