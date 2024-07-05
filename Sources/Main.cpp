#include <iostream>
#include <queue>
#include "Nodo.h" //nodo para el arbol ABB
#include "NodoAVL.h" //nodo para el arbol avl
#include "Transaccion.h"
#include "Cliente.h"
#include "ABB.h"
#include "AVL.h"

using namespace std;

queue<Transaccion*> fraudulentas;
queue<Cliente*> clientes;
ABB arbolABB;
AVL arbolAVL;


void ingresarTransaccion(){ //despliega la opcion 1 del menú

    cout << "Ingrese datos de cliente: " << endl;
    cout << "Nombre: ";
    string name; cin >> name; cout << endl;
    cout << "rut: ";
    string rut; cin >> rut; cout << endl; cout << endl;

    Cliente* c = new Cliente(name,rut);
    clientes.push(c);

    cout << "Ingrese rut de la cuenta de destino: ";
    string ctaDest; cin >> ctaDest; cout << endl;

    cout << "Ingrese su ubicacion: ";
    string ciudad; cin >> ciudad; cout << endl;
    
    cout << "Ingrese fecha (dd/mm/yyyy): ";

}



void buscarTransaccion(){

    cout << "Ingresa id a buscar: ";
    string id; cin >> id; cout << endl;

    int idBuscada = stoi(id);





}


void detectarFraudes(){

    //recorrer abb
}

void generarInforme(){

}

void leerTransacciones(){
    
}

void menuBanco(){

    cout << "-------------------------------" << endl;
    cout << "         Menú del Banco        " << endl; cout << endl;
    cout << "1) Ingresar Transaccion." << endl;
    cout << "2) Buscar Transaccion." << endl;
    cout << "3) Detectar Fraudes." << endl;
    cout << "4) Generar Informe." << endl;
    cout << "5) Salir" << endl; cout << endl;
    cout << "-------------------------------" << endl;

    cout << ">";

    string opt; cin >> opt; cout << endl;

}

int main(){


    


    return 0;
}