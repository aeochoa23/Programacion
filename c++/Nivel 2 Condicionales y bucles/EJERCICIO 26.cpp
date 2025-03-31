/*Programa: Determinar si un numero es palindromo
Objetiva: Verificar si un numero leido es igual a su version invertida*/

#include <iostream> //Biblioteca estandar para entrada y salida de datos
#include <cmath>    //Biblioteca para la funcion abs(0)
using namespace std;

int main(){
    int numero, digito, invertido = 0;  //Declaracion de variables

    //Solicitar al usuario que ingrese un numero
    cout<<"Ingrese un numero\n";
    cin>>numero;

    int original = abs(numero); //Tomamos el valor absoluto para evitar problemas con negativos
    int temp = original;   //Copia del numero para operar sin modificar el original

    //Invertimos el numero
    while(temp > 0){
        digito = temp % 10; //Extraer el ultimo digito
        invertido = invertido * 10 + digito;    //Construir el numero invertido
        temp = temp / 10;   //Eliminar el ultimo digito
    }

    //Mostramos el resultado
    cout<<"Numero invertido "<<invertido<<"\n";

    if(invertido == original){
        cout<<"Es un numero palindromo\n";
    }
    else{
        cout<<"No es un numero palindromo\n";
    }

    return 0;
}