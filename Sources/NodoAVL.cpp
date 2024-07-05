#include "NodoAVL.h"

NodoAVL::NodoAVL(Transaccion* trans)
{
    this -> transaccion = trans;
    this -> hijoDer = nullptr;
    this -> hijoIzq = nullptr;
    this -> altura = 1;         // parte de 1 para verificar que este balanceado             

};

NodoAVL::~NodoAVL() {delete trans}; // destructor del nodo