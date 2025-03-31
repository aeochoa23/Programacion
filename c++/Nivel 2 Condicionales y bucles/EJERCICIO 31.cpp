/*Programa: Contar cuantos numeros primos hay en un rango
Objetivo: Determinar la cantidad de numeros primos dentro de un rango dado*/

#include <iostream>
using namespace std;

int main(){
    int a, i, j, c=0;   //Variables, (a)es el limite del rango, (c)es el contador de primos

    //Solicitar al usuario el limite del rango
    cout<<"Hasta q rango?\n";
    cin>>a;

    //Iterar sobre todos los numeros desde 2 hasta 'a'
    for(i = 2; i <= a; i++){
        bool p = true;  //Variable booleana para verificar si 'i' es primo

        //Verificar si el numero 'i' es primo
        for(j = 2; j * j <= i; j++){    //Solo verificamos hasta la raiz cuadrada de 'i'
            if(i % j == 0){ //Si el divisible por algun numero, no es primo
                p = false;
                break;  //Salimos del bucle si encontramos divisor
            }
        }
        //Si 'i' es primo, incrementamos el contador
        if(p){
            c++;
        }
    }
    //Mostrar la cantidad de numeros primos encontrados en el rango
    cout<<"Cantidad de numeros primos en el rango "<<c<<"\n";
    return 0;
}