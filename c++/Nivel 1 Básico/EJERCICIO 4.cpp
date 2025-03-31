/*Programa: Multiplicación de dos números
Objetivo: Leer dos números ingresados por el usuario y mostrar su producto.*/

#include <iostream> //Biblioteca estándar para entrada y salida
using namespace std;

int main(){
    int a, b, producto; // Variables para almacenar los números y el resultado

    // Solicita al usuario ingresar dos números
    cout<<"Ingresar el primer valor a multiplicar\n";
    cin>>a;

    cout<<"Ingresar el segundo valor\n";
    cin>>b;

    // Realiza la multiplicación
    producto=a*b;

    // Muestra el resultado
    cout<<"El resultado de la multiplicacion es de "<<producto<<"\n";
    return 0;
} 
