/*Programa: Determinar si un estudiante aprobo o reprobo
Objetivo: Leer la nota de un estudiante y determinar si aprueba o reprueba*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    double nota;    //Variable para almacenar la nota del estudiante

    //Solicitar al usuario la nota
    cout<<"Ingrese la nota\n";
    cin>>nota;

    //Verificar si la nota esta en un rango valido
    if(nota < 0  ||  nota > 5){
        cout<<"Error, la nota debe estar entre 0 y 5\n";
    }
    else{
        if(nota >= 2.95){
            cout<<"El estudiante aprobo\n";
        }
        else{
            cout<<"El estudiante reprobo\n";
        }
    }
    
    return 0;
}