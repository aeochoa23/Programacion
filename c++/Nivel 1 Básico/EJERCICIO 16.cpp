/*Programa: Determinar si un numero es multiplo de otro
Objetivo: Leer dos numeros e indicar si el primero es multiplo del segundo*/

#include <iostream> //Bibloteca estandar para entrada y salida
using namespace std;

int main(){
    int num1, num2; //Variables para almacenar los numeros ingresados

    //Solicitar al usuario los numeros
    cout<<"Ingresa el primer valor\n";
    cin>>num1;
    cout<<"Ingresa el valor por el q se va a dividir\n";
    cin>>num2;

    //Verificar si num1 es multiplo de num2
    if(num2 != 0){
        if(num1 % num2 == 0){
            cout<<num1<<" es multiplo de "<<num2<<"\n";
        }
        else{
            cout<<num1<<" no es multiplo de "<<num2<<"\n";
        }
    }
    else{
        cout<<"Error, no se puede dividir por cero\n";
    }
    return 0;
}