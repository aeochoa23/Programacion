/*Programa: Determinar si un número es par o impar
Objetivo: Leer un número ingresado por el usuario y verificar si es par o impar. */

#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std;
int main(){
    int numero; // Variable para almacenar el número ingresado

    // Solicita al usuario ingresar un número
    cout<<"Ingresa el numero\n";
    cin>>numero;

    // Verifica si el número es par o impar
    if(numero % 2 == 0){
        cout<<"El numero "<<numero<<" es par\n";
    }else{
        cout<<"El numero "<<numero<<" es impar\n";
    }

    return 0;
}