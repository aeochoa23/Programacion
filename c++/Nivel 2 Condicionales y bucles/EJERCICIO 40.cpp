//40. Verificar si un número es un número de Armstrong.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Variables
    int numero, original, temp, digito, num_digitos = 0;
    double suma = 0;

    //Solicitar al usuario el numero
    cout<<"Ingresa el numero a verificar\n";
    cin>>numero;

    original = numero;

    temp = numero;
    while(temp > 0){
        temp /= 10;
        num_digitos++;
    }

    temp = original;

    while(temp > 0){
        digito = temp % 10;
        suma += pow(digito, num_digitos);
        temp /= 10;
    }

    if(suma == original){
        cout<<"Es un numero Armstrong";
    }
    else{
        cout<<"No es un numero Armstrong";
    }
    return 0;
}