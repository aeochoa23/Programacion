/*Programa: Calcular el promedio de tres numeros
Objetivo: Leer tres numeros ingresados por el usuario y calcular su promedio.*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    double num1, num2, num3, promedio;  //Variables para almacenar los numeros y su promedio

    //Solicitar los tres numeros al usuario
    cout<<"Ingrese el primer valor\n";
    cin>>num1;
    cout<<"Ingrese el segundo valor\n";
    cin>>num2;
    cout<<"Ingresa el tercer valor\n";
    cin>>num3;

    //Calcular el promedio
    promedio = (num1 + num2 + num3) / 3;

    //Mostrar el resultado
    cout<<"El promedio es de "<<promedio<<"\n";
    
    return 0;
}
