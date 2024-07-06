#pragma once
#include "Nodo.h"
#include <queue>

class ABB {
private:
    Nodo* raiz;
    queue<Transaccion*> transaccionesFraudulentas;

    Nodo* insertarRec(Nodo*, Transaccion*);
    //void inOrden(Nodo* nodo);
    //void preOrden(Nodo* nodo);
    //void postOrden(Nodo* nodo);
    //void eliminarArbol(Nodo* nodo);
    void detectarFraudeRec(Nodo*, int);
    Nodo* buscarRec(Nodo*,int);

public:
    ABB(Nodo*);
    ~ABB();

    void insertar(Transaccion*);
    //void inOrden();
    void detectarFraude(int);
    void procesarFraude();
    Transaccion* buscar(int);
    void destruir(Nodo*);
    void generarReporte(Nodo*);
    void generarReporte();
};