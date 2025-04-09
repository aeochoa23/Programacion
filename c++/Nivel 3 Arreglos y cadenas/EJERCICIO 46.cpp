/*Programa: Contar cuántas veces aparece un número en un arreglo.
Objetivo: Ingresar una serie de números en un arreglo y contar cuántas veces aparece un número específico.*/

#include <iostream>
using namespace std;

int main(){
    int n;

    //Solicitar la cantidad de elementos del arreglo
    cout<<"Ingresa la cantidad de elementos q va a contener el arreglo\n";
    cin>>n;

    //Ingresar datos del arreglo
    int arreglo[n];
    for(int i=0; i<n; i++){
        cout<<"Ingresa el valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    //Numero a buscar
    int numero;
    cout<<"Ingresa el numero a buscar\n";
    cin>>numero;

    //Buscar numero
    bool encontrado=false;
    for(int i=0; i<n; i++){
        if(arreglo[i]==numero){
            encontrado=true;
            break;
        }
    }

    //Mostrar el resultado
    if(encontrado){
        //Contar los numeros encontrados en el arreglo
    int contador=0;
    for(int i=0; i<n; i++){
        if(arreglo[i]==numero){
            contador++;
        }
    }
    cout<<"Aparece "<<contador<<" en el arreglo\n";
    }else{
        cout<<"Ese numero no aparece en el arreglo\n";
    }
    
    return 0;
}