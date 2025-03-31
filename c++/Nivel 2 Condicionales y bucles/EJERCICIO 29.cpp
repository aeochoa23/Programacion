/*Programa: Calcular la potencia de un numero (a^b) sin usar pow()
Objetivo: Elevar un numero base a un exponente sin utilizar la funcion pow()*/

#include <iostream>
using namespace std;

int main(){
    int a, b, c=1, i;   //Variables

    //Solicitar al usuario la base
    cout<<"Ingrese el numero base\n";
    cin>>a;

    //Solicitar al usuario el exponente
    cout<<"Ingrese el exponente\n";
    cin>>b;

    //Calcular la potencia mediante un ciclo for
    for(i = 1; i <= b; i++){
        c = c * a;  //Multiplicamos la base por si misma b veces
    }

    //Mostrar el resultado
    cout<<"El resultado es "<<c<<"\n";
    return 0;
}