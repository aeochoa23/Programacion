/*Programa: Imprimir los primeros 10 numeros pares usando un ciclo 'while'
Objetivo: Mostrar los numeros pares del 2 al 20 en la consola*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    int i=2; //Inicializamos con el primer numero par

    //Usamos un ciclo 'while' para imprimir los primeros 10 numeros pares
    while(i <= 20){
        cout<<i<<" ";
        i += 2;
    }
    
    return 0;
}
