/*
    Practica 3
    Velez Santiago Eduardo
    212354797
*/
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;


int main(){
    char nombreArchivo[15];
    cout<<"Ingrese nombre del archivo: ";
    cin>>nombreArchivo;
    cout<<"\nBuscando archivo...\n";

    ifstream a (nombreArchivo);
    if(a.is_open()){
        cout<<"Exito el archivo existe...\n";
        a.close();
    }
    else{
        ofstream b(nombreArchivo,ios::app);
        cout<<"No se encontro el archivo...\n";
        cout<<"Se creo un archivo con ese nombre...\n";
    }

    return 0;
}
