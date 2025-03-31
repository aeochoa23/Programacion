/*Programa: Generar la serie Fibonacci hasta N terminos
Objetivos: Mostrar la serie de Fibonacci hasta el numero de termino ingresado por el usuario*/

#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, i;  //Variables

    //Inicializacion de los dos primeros terminos de la serie
    a=0;
    b=1;

    //Solicitar al usuario la cantidad de terminos a generar
    cout<<"Cuantos numeros de la serie quiere agregar?\n";
    cin>>n;

    //Verificar si el usuario quiere al menos un termino
    if(n >= 1){
        cout<<a<<" ";   //Imprime el primer numero de la serie
    }

    //Verificar si el usuario quiere al menos dos terminos
    if(n >= 2){
        cout<<b<<" ";   //Imprime el segundo numero de la serie
    }

    //Generar la serie de Finobacci a partir del tercer termino
    for(i = 3; i <= n; i++){
        c = a + b;  //Calculamos el siguiente numero de la serie
        cout<<c<<" ";   //Mostramos el numero en la salida
        a = b;      //Desplazamos los valores para continuar la serie
        b = c;
    }
    
    return 0;
}