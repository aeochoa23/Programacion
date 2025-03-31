/*Programa: Imprimir los divisores de un número.
Objetivo: Determinar y mostrar los divisores de un numero ingresado por el usuario*/

#include <iostream>
using namespace std;

int main(){
    //Variables
    int n, i;

    //Solicitar al usuario el numero
    cout<<"Ingrese el numero para encontrar sus divisores\n";
    cin>>n;

    //Mostrar mensaje indicando los divisores
    cout<<"Los divisores de "<<n<<" son:\n";
    
    //Hallar y mostrar los divisores del numero
    for(i = 1; i <= n; i++){
        if(n % i == 0){ //Si el residuo de la division es 0, entonces es divisor
            cout<<i<<", ";
        }
    }

    return 0;
}