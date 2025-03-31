/*Programa: Imprimir la tabla de multiplicar de un numero ingresado
Objetivo: Leer un numero e imprimir su tabla de multiplicar del 1 al 12*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    int numero, i, resultado;   //Variables: numero(numero de la tabla), i(contador), resultado(resultado de la multiplicacion)

    //Solicita al usuario ingresar el numero para la tabla de multiplicar
    cout<<"Ingresa que tabla desea imprimir\n";
    cin>>numero;

    //Ciclo para imprimir la tabla de multiplicar del numero ingresado
    for(i=1; i<=12; i++){
        resultado = numero * i; //Calcula el resultado de la multiplicacion
        cout<<numero<<" x "<<i<<" = "<<resultado<<"\n";  //Muestra el resultado
    }

    return 0;
}
