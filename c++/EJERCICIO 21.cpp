/*Programa: Encontrar el mayor de tres numeros ingresados
Objetivos: Determinar cual de los tres valores ingresados es el mayor*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    int a, b, c;    //Variables para almacenar los numeros

    //Entrada de datos
    cout<<"Ingresa el primer valor\n";
    cin>>a;
    cout<<"Ingresa el segundo valor\n";
    cin>>b;
    cout<<"Ingresa el tercer valor\n";
    cin>>c;

    //Determinar el mayor
    if(a >= b  &&  a >= c){
        cout<<"El numero mayor es el "<<a;
    }
    else if(b >= a  &&  b >= c){
        cout<<"El numero mayor es el "<<b;
    }
    else{
        cout<<"El numero mayor es el "<<c;
    }
    return 0;
}