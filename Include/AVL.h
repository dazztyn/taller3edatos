#pragma once
#include "NodoAVL.h"

class AVL
{
private:
    NodoAVL* raiz;

    NodoAVL* insertarRec(NodoAVL* nodo, Transaccion* transaccion);
    NodoAVL* buscarRec(NodoAVL* nodo, int id);
    int altura(NodoAVL* nodo);
    int balancear(NodoAVL* nodo);
    NodoAVL* rotarDer(NodoAVL* der);
    NodoAVL* rotarIzq(NodoAVL* izq);
public:
    AVL();
    ~AVL();

    void insertar(Transaccion* transaccion);
    void buscarPorID(int id);
    void destruir(NodoAVL* nodo);
}

