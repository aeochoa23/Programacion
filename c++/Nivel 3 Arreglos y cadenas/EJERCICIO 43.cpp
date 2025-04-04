/*Programa: Suma de los elementos de un arreglo
Objetivo: Solicitar al usuario una cantidad de elementos, almancenarlos en un arreglo y calcular la suma de todos sus valores.*/

#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;

    //Solicitar al usuario la cantidad de elementos del arreglo
    cout<<"Ingresa la cantidad de elementos del arreglo\n";
    cin>>n;

    //Validar que el tamaño del arreglo sea mayor a 0
    if(n < 0){
        cout<<"El tamaño del arreglo tiene q ser mayor a 0";
        return 1;
    }

    int arreglo[n];

    //Llenar el arreglo con valores ingresados por el usuario
    for(int i = 0; i < n; i++){
        cout<<"Ingresa el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    //Calcular la suma de los elementos del arreglo
    for(int i = 0; i < n; i++){
        suma += arreglo[i]; //Equivalente a suma = suma + arreglo[i]
    }

    //Mostrar el resultado
    cout<<"La suma de los elementos del arreglo es de "<<suma<<"\n";
    
    return 0;
}