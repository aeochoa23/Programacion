/*Programa: Encontrar el numero mas pequeño en un arreglo
Objetivo: Leer un arreglo de N elementos e identificar el menor*/

#include <iostream>
using namespace std;

int main(){
    int n;

    //Solicitar al usuario la cantidad de elementos
    cout<<"Ingresa la cantidad de elementos: ";
    cin>>n;

    //Ingresar valores al vector
    int arreglo[n];
    for(int i = 0; i < n; i++){
        cout<<"Ingresa el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    //Encontrar el numero mas pequeño
    int menor = arreglo[0];
    for(int i = 1; i < n; i++){
        if(arreglo[i] < menor){
            menor = arreglo[i];
        }
    }

    //Mostrar el numero menor
    cout<<"El numero mas pequeno es el "<<menor<<"\n";

    return 0;
}