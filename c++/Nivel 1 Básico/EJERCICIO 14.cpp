/*Programa: Determinar si un numero es positivo, negativo o cero
Objetivo: Leer un numero y clasificarlo como positivo, negativo o cero*/

#include <iostream> //Bibioteca estandar para entrada y salida
using namespace std;

int main(){
    int numero; //Variable para almacenar el numero ingresado

    //Solicitar al usuario un numero
    cout<<"Ingrese el numero\n";
    cin>>numero;

    //Evaluar el numero ingresado y mostrar el resultado
    if(numero>0){
        cout<<"El numero es positivo\n";
    }else if(numero==0){
        cout<<"El numero es un cero\n";
    }else{
        cout<<"El numero es negativo\n";
    }
    
    return 0;
}
