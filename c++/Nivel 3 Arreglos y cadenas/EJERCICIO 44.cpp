/*Programa: Ordenar un arreglo en orden ascendente.
Objetivo: Solicitar al usuario una serie de números, almacenarlos en un arreglo y luego ordenarlos de menor a mayor utilizando el método burbuja.*/

#include <iostream>
using namespace std;

int main(){
    int n;

    //Solicitar al usuario la cantidad de elementos
    cout<<"Ingresa la cantidad de elementos\n";
    cin>>n;

    //Ingresar los valores en el elemento
    int arreglo[n];
    for(int i = 0; i < n; i++){
        cout<<"Ingresa el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    //// Ordenar el arreglo en orden ascendente (método burbuja
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arreglo[j] > arreglo[j+1]){
                int aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }

    // Mostrar el arreglo ordenado
    for(int i=0; i<n; i++){
        cout<<arreglo[i]<<" ";
    }
    return 0;
}