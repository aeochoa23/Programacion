/*Programa: Determinar si un numero es perfecto
objetivo: Verificar si un numero es perfecto sumando sus divisores propios*/

#include <iostream>
using namespace std;

int main(){
    int a, i, ori, sum=0; //Variblaes

    //Solicitar al usuario un numero
    cout<<"Ingresa un numero\n";
    cin>>a;

    ori=a;  //Guardamos el numero original para la comparacion

    //Encontrar los divisores propios del numero
    for(i = 1; i < a; i++){ //Iteramos desde el 1 hasta (a-1)
        if(a % i == 0){ //Si i es divisor de a
            cout<<i<<" ";   //Imprimimos el divisor
            sum=sum+i;  //Acumulamos la suma de los divisores
        }
    }

    //Mostrar la suma de los divisores 
    cout<<"\nLa suma de los divisores es de "<<sum<<"\n";

    //Verificar si el numero es perfecto
    if(ori==sum){
        cout<<"Es un numero perfecto";
    }
    else{
        cout<<"No es un numero perfecto";
    }
    
    return 0;
}