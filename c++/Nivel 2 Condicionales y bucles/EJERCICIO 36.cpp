/*Programa: Suma de una serie geometrica
Objetivo: Calcular la suma de una serie geometrica con los datos ingresados por el usuario*/

#include <iostream>
#include <cmath>    //Para la funcion pow()
using namespace std;

int main(){
    int a, r, n, suma = 0, i; //Variables

    //Solicitar al usuario el primer termino(a), razon(r) y el numero de terminos(n)
    cout<<"Ingresa el primer termino de la serie\n";
    cin>>a;

    cout<<"Ingresa la razon de la serie\n";
    cin>>r;

    cout<<"Ingresa la cantidad de terminos\n";
    cin>>n;

    //Calculo de la suma de la serie geometrica
    for(i = 0; i <= n - 1; i++){
        suma = suma + (a * pow(r,i));   //Cada termino se calcula como a * r^i y se suma
    }

    //Mostrar el resultado de la suma de la serie geometrica
    cout<<"La suma de la serie geometrica es "<<suma<<"\n";

    return 0;
}