/*Programa: Encontrar el numero mas grande en un arreglo
Objetivo: Leer un arreglo de N elementos e identificar el mayor*/

#include <iostream>
using namespace std;

int main(){

    //Variables
    int n;

    //Pedir al usuario la cantidad de elementos
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>n;

    //Ingresar valores al arreglo
    int arreglo[n];
    for(int i = 0; i < n; i++){
        cout<<"Ingresa el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    //Encontrar el valor mayor en el arreglo
    int mayor = arreglo[0];
    for(int i = 1; i < n; i++){
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }

    //Mostrar el resultado
    cout<<"El numero mas grande en el arreglo es "<<mayor<<"\n";

    return 0;
}
