/*Programa: Contar los digitos de un numero
Objetivos: Determinar cuantos digitos tiene un numero entero ingresado por el usuario*/

#include <iostream> //Biblioteca estandar para entrada y salida
#include <cmath>    //Biblioteca para la funcion abs()
using namespace std;

int main(){
    int numero, cont=0;     //Variables para el numero ingresado y el contador de digitos

    //Solicitar al usuario que ingrese un numero
    cout<<"Ingresa un numero entero\n";
    cin>>numero;

    //Si el numero es negativo, lo convertimos en positivo
    if(numero < 0){
        numero = abs(numero);
    }

    //Si el numero es 0, tiene un solo digito
    if(numero == 0){
        cout<<"Tiene 1 solo digito\n";
    }
    else{
        //Contar los digitos del numero dividiendolo sucesivamente entre 10
        while(numero > 0){
            numero = numero / 10;   //Eliminar el ultimo digito del numero
            cont++;     //Incrementar el contador de digitos
        }

        //Mostrar la cantidad de digitos
        cout<<"Tiene "<<cont<<" digitos";
    }

    return 0;
}