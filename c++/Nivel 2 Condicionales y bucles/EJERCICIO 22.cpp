/*Programa: Verificar si un numero es primo
Objetivos: Determinar si el numero ingresado es primo o no*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    int numero, i;  //Variable para almacenar el numero y el contador del ciclo
    bool esPrimo = true;  //Bandera para indicar si el numero es primo

    //Solicitar al usuario que ingrese un numero
    cout<<"Ingresa un numero\n";
    cin>>numero;

    //Un numero menor que 2 no es considerado primo
    if(numero < 2){
        cout<<"No es primo";
    }
    else{
        //Verificar si el numero es divisible por algun numero desde 2 hasta la raiz cuadrada de 'numero'
        for(i = 2; i * i <= numero; i++){
            if(numero % i == 0){
                esPrimo=false;    //Se encontro un divisor, por lo que no es primo
                break;
            }
        }

        //Mostrar el resultado basado en la bandera 'esPrimo'
        if(esPrimo){
            cout<<"Es primo\n";
        }
        else{
            cout<<"No es primo\n";
        }
    }
    
    return 0;
}