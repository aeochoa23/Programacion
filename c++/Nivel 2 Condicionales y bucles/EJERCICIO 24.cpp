/*Programa: Calcular la suma de los digitos de un numero
Objetivo: Sumar los digitos de un numero entero ingresado por el usuario*/

#include <iostream> //Biblioteca para entrada y salida
#include <math.h>   //Biblioteca para la funcion abs()
using namespace std;

int main(){
    int numero, digito, suma=0; //Variables para el numero, cada digito y la suma total

    //Solicitar al usuario que ingrese un numero
    cout<<"Ingresa el numero\n";
    cin>>numero;

    //Convertir el numero a positivo en caso de que sea negativo
    if(numero < 0){
        numero = abs(numero);
    }

    //Calcular la suma de los digitos
    while(numero > 0){
        digito = numero % 10;   //Obtener el ultimo digito
        suma += digito; //Sumar el digito a la suma  total
        numero = numero / 10;   //Eliminar el ultimo digito del numero
    }

    //Mostrar el resultado
    cout<<"La suma de los digitos es de: "<<suma<<"\n";
    return 0;
}