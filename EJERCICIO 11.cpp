/*Programa: Determinar si un año es bisiesto
Objetivo: Leer un año e indicar si es bisiesto o no*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    int anio;   //Variable para almacenar el año ingresado

    //Solicita al usuario ingresa un año
    cout<<"Ingresa el ano\n";
    cin>>anio;

    //Un año es bisiesto si es divisible por 4 y no por 100, excepto si tambien es divisible por 400
    if(anio % 4 == 0  &&  anio % 100 != 0  ||  anio % 400 == 0){
        cout<<"El ano es bisiesto\n";
    }else{
        cout<<"El ano no es bisiesto\n";
    }
    return 0;
}