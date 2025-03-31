/*Programa: Invertir un numero
Objetivo: Tomar un numero entero ingresado por el usuario e imprimirlo invertido*/

#include <iostream> //Biblioteca estandar para salida y entrada
using namespace std;

int main(){
    int numero, digito, invertido=0; 

    //Solicitar al usuario que ingrese un numero
    cout<<"Ingresa un numero\n";
    cin>>numero;

    //Manejo de numeros negativos
    bool esNegativo = false;
    if(numero < 0){
        esNegativo = true;
        numero = -numero;   //Convertimos a positivo para invertirlo
    }

    //Invertimos el numero
    while(numero > 0){
        digito = numero % 10;   //Extraer el ultimo digito
        invertido = invertido * 10 + digito;    //Construir el numero invertido
        numero = numero / 10;   //Eliminar el ultimo digito
    }

    //Si el numero original era negativo, volverlo a negativo
    if(esNegativo){
        invertido = -invertido;
    }

    //Mostrar el numero invertido
    cout<<"El numero invertido es "<<invertido<<"\n";

    return 0;
}