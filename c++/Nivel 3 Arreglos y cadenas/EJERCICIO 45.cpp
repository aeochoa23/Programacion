/*Programa: Buscar un elemento en un arreglo.
Objetivo: Solicitar al usuario una serie de números, almacenarlos en un arreglo y luego verificar si un número dado se encuentra en el arreglo.*/

#include <iostream>
using namespace std;

int main(){
    int n;

    //Solicitar la cantidad de elementos
    cout<<"Cuantos elementos van en el arreglo?\n";
    cin>>n;

    //Ingresar los valores del arreglo
    int arreglo[n];
    for(int i = 0; i < n; i++){
        cout<<"Ingresa el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    //Numero a buscar
    int numero;
    cout<<"Ingresa el numero que desea buscar en el arreglo\n";
    cin>>numero;

    //Busqueda del numero
    bool encontrado = false;
    for(int i = 0; i < n; i++){
        if(arreglo[i]==numero){
            encontrado=true;
            break;
        }
    }

    //Resultado
    if(encontrado){
        cout<<"Numero encontrado";
    }
    else{
        cout<<"No se encontro";
    }
    return 0; 
}