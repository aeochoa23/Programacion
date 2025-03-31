/*Programa: Calcular el factorial de un numero
Objetivo: Calcular el factorial de un numero ingresado por el usuario*/

#include <iostream>
using namespace std;

int main(){
    int a, b = 1, i = 1; //Variables

    //Solicitar al usuario que ingrese un numero
    cout<<"Ingresa un numero para calcular su factorial\n";
    cin>>a;

    //Comenzamos el calculo del factorial utilizando un bucle while
    while(i <= a){
        b = b * i;  //Multiplicamos por b por el valor actual de i
        i++;  //Incrementamos i para pasar al siguiente numero
    }

    //Imprimir el resultado del factorial 
    cout<<"El factorial de "<<a<<" es "<<b<<"\n";
    
    return 0;
}