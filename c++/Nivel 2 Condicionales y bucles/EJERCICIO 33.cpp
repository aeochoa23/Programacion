/*Programa: Imprimir una piramide de numeros de altura N
Objetivo: Generar una piramide en la cual los numeros en cada fila aumentan*/

#include <iostream>
using namespace std;

int main(){
    int n, i, j;

    //Solicitar al usuario la altura de la piramide
    cout<<"Ingresa la altura de la piramide\n";
    cin>>n;

    //Generacion de la piramide
    for(i = 1; i <= n; i++){    //Interaccion para cada fila
        //Imprimir los espacios para centrar la piramide
        for(j = 1; j <= n - i; j++){    
            cout<<" ";
        }
        //Imprimir los numeros en cada fila
        for(j = 1; j <= (2 * i - 1); j++){    //La cantidad de numeros en cada fila
            cout<<j;    //Imprimir el numero correspondiente
        }
        //Salto de linea despues de cada linea
        cout<<"\n";
    }
    
    return 0;
}