#include "ABB.h"

ABB::ABB(Nodo* raiz){

    this -> raiz = nullptr;

}


void ABB::insertar(Nodo*& nodo, Transaccion* transaccion){ //ingresa un nodo al árbol de transacciones

    if(raiz == nullptr){
         nodo = new Nodo(transaccion);
    }

    if(transaccion -> getMonto() < nodo -> transaccion -> getMonto()){
        (insertar(nodo -> hijoIzq, transaccion));
    }
    else if (transaccion -> getMonto() > raiz -> transaccion -> getMonto()){
        (insertar(nodo -> hijoIzq, transaccion));
    }

}

void ABB::inOrden(Nodo* nodo) {
    if (nodo != nullptr) {
        inOrden(nodo -> hijoIzq);
        cout << nodo -> transaccion -> getID() << " ";
        inOrden(nodo -> hijoDer);
    }
}
