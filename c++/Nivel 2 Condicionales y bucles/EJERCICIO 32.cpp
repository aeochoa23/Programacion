/*Programa: Imprimir un triangulo de astericos de altura N
Objetivo: Generar un triangulo simetrico de asteriscos con la altura ingresada por el usuario*/

#include <iostream>
using namespace std;

int main(){
    int a, i, j;    //Variables

    //Variables al usuario la altura del triangulo
    cout<<"Altura del triangulo\n";
    cin>>a;

    //Generar el triangulo
    for(i = 1; i <= a; i++){
        //Imprimir espacios en blanco para centrar el triangulo
        for(j = 1; j <= a - i; j++){
            cout<<" ";
        }
        //Imprimir los astericos correspondientes a cada fila
        for(j=1; j<=(2*i-1); j++){
            cout<<"*";
        }
        //Salto de linea despues de cada fila
        cout<<"\n";
    }
    
    return 0;
}