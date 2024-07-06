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

    if(nodo == nullptr){
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

    if(nodo->transaccion->getMonto() > monto_limite)
    {
        nodo->transaccion->mostrar();
    }

    detectarFraudeRec(nodo->hijoIzq, monto_limite);
    detectarFraudeRec(nodo->hijoDer, monto_limite);
}

void ABB::procesarFraude()
{
    cout << "Procesando transacciones fraudulentas..." << endl;
    while(!transaccionesFraudulentas.empty())
    {
        Transaccion* transaccion = transaccionesFraudulentas.front();
        transaccion->mostrar();
        transaccionesFraudulentas.pop();
    }
}

void ABB::generarReporte(Nodo* nodo) {
    
    cout << "Transacción ID: " << nodo -> transaccion->getID() << endl;
    cout << "Cuenta Origen: " << nodo -> transaccion->getCtaOrigen() << endl;
    cout << "Cuenta Destino: " << nodo -> transaccion->getCtaDestino() << endl;
    cout << "Monto: " << nodo->transaccion-> getMonto() << endl;
    cout << "Ubicación:" << nodo->transaccion->getUbicacion() << endl;
    cout << "Fecha: " << nodo->transaccion->getFecha() << endl;
    cout << "Hora: " << nodo->transaccion->getHora() << endl;
    cout << "-------------------------"<<endl;
    
    generarReporte(nodo->hijoIzq);
    generarReporte(nodo->hijoDer);
}

void ABB::generarReporte() {
    cout << "-------------------------"<<endl;
    cout << "Transacciones NO FRAUDULENTAS" << endl;
    generarReporte(raiz);
    cout << "Transacciones FRAUDULENTAS" << endl;
    //generarReportesFraudulentos(raiz);
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
