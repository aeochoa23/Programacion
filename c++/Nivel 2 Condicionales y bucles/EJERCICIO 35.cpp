/*Programa: Adivina el numero aleatorio
Objetivo: Generar un numero aleatorio entre 1 y 100 y pedir al usuario que lo adivine*/

#include <iostream>
#include <ctime>    //Libreria para la funcion time()
using namespace std;

int main(){

    //Inicializar la semilla para generar numeros aleatorios
    srand(time(NULL));

    //Variables
    int a;  //Variable donde el usuario ingresara su intento
    int num = (rand() % 100) + 1;   //Genera un numero aleatorio entre 1 y 100

    //Mensaje para el usuario
    cout<<"Intenta adivinar el numero\n";
    cin>>a;

    //Bucle para verificar si el numero ingresado es el correcto
    while(a!=num){
        if(a<num){
            cout<<"El numero a adivinar es mayor\n";    // Si el número ingresado es menor al número secreto
        }
        else{   // Si el número ingresado es mayor al número secreto
            cout<<"El numero a adivinar es menor\n";
        }

        // Pedir al usuario que ingrese un nuevo intento
        cout<<"ingresa de nuevo el numero\n";
            cin>>a;
    }

    // Mensaje de éxito cuando el usuario adivina el número
    cout<<"Felicidades adivinaste el numero";

    return 0;
}