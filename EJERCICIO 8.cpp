/*Programa: Convertir grados Celsius a Fahrenheit
Objetivo: Leer una temperatura en grados Celsius y convertirla a Fahrenheit*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    double celsius, fahrenheit; //Variables para almacenar los valores en Celsius y Fahrenheit

    //Solicita al usuario ingresar la temperatura en grados Celsius
    cout<<"Ingresa cuantos grados celsius quieres convertir a Fahrenheit\n";
    cin>>celsius;

    //Realiza la conversión de Celsius a Fahrenheit
    fahrenheit= celsius * (9.0 / 5.0) + 32;

    //Muestra el resultado en grados fahrenheit
    cout<< fahrenheit <<" Fahrenheit\n";

    return 0;
} 