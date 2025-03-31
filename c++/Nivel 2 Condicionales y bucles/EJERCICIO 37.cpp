/* Programa: Encontrar el número más grande y el más pequeño en una serie de N números
Objetivo: Leer una cantidad N de números ingresados por el usuario y determinar el mayor y el menor*/

#include <iostream>
using namespace std;

int main(){
    //Variables
    int n, num, mayor, menor, i;

    // Solicitar al usuario la cantidad de números que ingresará
    cout<<"Ingresa la cantidad de terminar q va a necesitar\n";
    cin>>n;

    // Solicitar el primer número y asignarlo como mayor y menor inicial
    cout<<"Ingresa el primer numero\n";
    cin>>num;
    mayor = menor = num;    // Inicializamos mayor y menor con el primer número ingresado

    // Leer los números restantes
    for(i=1; i < n; i++){
        cout<<"Ingresa otro numero\n";
        cin>>num;

        // Comparar el número actual con el mayor y menor registrado
        if(num>mayor){
            mayor = num;
        }
        else{
            menor = num; // Corregido: Se evalúa de manera independiente
        }
    }

    // Mostrar los resultados
    cout << "El numero mas grande es: "<< mayor <<"\n";
    cout << "El numero mas pequeno es: "<< menor <<"\n";

    return 0;
}