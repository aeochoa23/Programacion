/* Programa: Cálculo del área de un triángulo
Objetivo: Leer la base y la altura de un triángulo e imprimir su área. */

#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std;
int main(){
    double base, altura, area;  // Variables para almacenar la base, altura y área del triángulo


    // Solicita al usuario ingresar la base del triángulo
cout<<"Ingresa la base del triangulo:\n";
    cin>>base;

    // Solicita al usuario ingresar la altura del triángulo
    cout<<"Ingresa la altura del triangulo:\n";
    cin>>altura;

    // Calcula el área del triángulo
    area = (base * altura) / 2;

    // Muestra el resultado
    cout<<"El area del triangulo es: "<< area <<"\n";

    return 0;
}