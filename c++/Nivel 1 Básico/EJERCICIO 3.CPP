/*Programa: Suma de dos numeros
Objetivo: Leer dos numeros ingresados por el usuario y mostrar su suma*/

#include <iostream>  //Biblioteca estándar para entrada y salida
using namespace std;

int main(){
    int a, b, suma; // Variables para almacenar los números y el resultado

    // Solicita al usuario ingresar dos números
    cout<<"Ingresa el primer valor\n";
    cin>>a;

    cout<<"Ingresa el segundo valor\n";
    cin>>b;

    // Realiza la suma
    suma=a+b;

    // Muestra el resultado
    cout<<"El resultado de la suma es de "<<suma<<"\n";
    
    return 0;
} 
