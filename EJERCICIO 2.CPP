/*Programa: Leer e imprimir un numero entero
Objetivo: Leer un numero entero ingresado por el usuario y mostrarlo en pantalla*/

#include <iostream> //Biblioteca estándar para entrada y salida
using namespace std;

int main(){
    int n; //Variable para almacenar el número ingresado

    //Solicita al usuario ingresar un número entero
    cout<<"Ingresa un numero entero\n";
    cin>>n;

    //Muestra el número ingresado
    cout<<"El numero que ingresaste es el "<<n<<"\n";
    
    return 0;
} 