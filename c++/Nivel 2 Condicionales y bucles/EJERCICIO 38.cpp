/*Programa: Sumar los números pares e impares de un rango.
Objetivo: Calcular la suma de los numeros pares e impares dentro de un rango dado*/

#include <iostream>
using namespace std;

int main(){
    //Variables
    int i, suma_par = 0, suma_impar = 0, rango;

    //Solicitar al usuario el rango de los numeros
    cout<<"Ingrese el rango de los numeros\n";
    cin>>rango;

    //Verificar si el rango ingresado sea valido (mayor q 0)
    if(rango <= 0){
        cout<<"El rango tiene q ser un valor positivo mayor que cero\n";
        return 1; //Finaliza el programa con un codigo de error
    }

    //Recorrer los numeros desde el 1 hasta el rango dado
    for(i = 1; i <= rango; i++){
        if(i % 2 == 0){ //Si el numero es par
            suma_par += i; 
        }
        else{   //Si el numero es impar
            suma_impar += i;
        }
    }

    //Mostrar la suma
    cout<<"La suma de los numeros pares en el rango dado es de "<<suma_par<<"\n";
    cout<<"La suma de los numeros impares en el rango dado es de "<<suma_impar<<"\n";
    return 0;
}