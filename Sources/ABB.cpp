#include "ABB.h"

ABB::ABB(Nodo* raiz){

    this -> raiz = nullptr;

}
ABB::~ABB(){
    destruir(raiz);
}

void ABB::insertar(Transaccion* transaccion)
{
    raiz = insertarRec(raiz, transaccion);
}

Nodo* ABB::insertarRec(Nodo* nodo, Transaccion* transaccion){ //ingresa un nodo al árbol de transacciones

    if(raiz == nullptr){
         return new Nodo(transaccion);
    }

    if(transaccion -> getMonto() < nodo -> transaccion -> getMonto()){
        nodo->hijoIzq = insertarRec(nodo->hijoIzq,transaccion);
    }
    else if (transaccion -> getMonto() > nodo -> transaccion -> getMonto()){
        nodo->hijoDer = insertarRec(nodo->hijoDer, transaccion);
    }
    return nodo;
}

void ABB::detectarFraude(int monto_limite)
{
    detectarFraudeRec(raiz,monto_limite);
}

void ABB::detectarFraudeRec(Nodo* nodo, int monto_limite)
{
    if(nodo == nullptr)
    {
        return;
    }

    if(nodo->trans->getMonto() > monto_limite)
    {
        nodo->trans->mostrar();
    }

    detectarFraudeRec(nodo->hijoIzq, monto_limite);
    detectarFraudeRec(nodo->hijoDer, monto_limite);
}

void ABB::destruir(Nodo* nodo)
{
    if(nodo != nullptr)
    {
        destruir(nodo->hijoDer);
        destruir(nodo->hijoDer);
        delete nodo;
    }
}

/*void ABB::inOrden(Nodo* nodo) {
    if (nodo != nullptr) {
        inOrden(nodo -> hijoIzq);
        cout << nodo -> transaccion -> getID() << " ";
        inOrden(nodo -> hijoDer);
    }
}*/
