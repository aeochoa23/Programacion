/*Programa: Verificar si un numero es un numero de Armstrong
Objetivo: Determinar si un numero ingresado es un numero de Armstrong*/

#include <iostream>
#include <cmath>    //Para utilizar la funcion pow()
using namespace std;

int main(){
    //Variables
    int numero, original, temp, digito, num_digitos = 0;
    double suma = 0;

    //Solicitar al usuario el numero
    cout<<"Ingresa el numero a verificar\n";
    cin>>numero;

    //Validar que el numero sea positivo
    if(numero < 0){
        cout<<"Ingrese un numero positivo\n";
        return 1;   //Termina el programa con codigo de error
    }

    original = numero;  //Guardemos el numero original para comparaciones posteriores

    //Contar la cantidad de digitos en el numero
    temp = numero;
    while(temp > 0){
        temp /= 10;
        num_digitos++;
    }

    //Calcular la suma de cada digito elevado a la potencia del numero de digitos
    temp = original;
    while(temp > 0){
        digito = temp % 10; //Extraer el ultimo digito
        suma += pow(digito, num_digitos);   //Elevarlo a la cantidad de digitos y sumarlos
        temp /= 10; //Eliminar el ultimo digito
    }

    //Verificar si la suma obtenida es igual al numero original
    if(suma == original){
        cout<<original<<" Es un numero Armstrong\n";
    }
    else{
        cout<<original<< "No es un numero Armstrong\n";
    }

    return 0;
}