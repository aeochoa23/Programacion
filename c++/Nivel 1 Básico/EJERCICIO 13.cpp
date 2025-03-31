/*Programa: Calcular la edad de una persona
Objetivo: Determinar la edad de una persona a parrtir de su año de nacimiento*/

#include <iostream> //Biblioteca estandar para entrada y salida
#include <ctime>    //Biblioteca para obtener el año actual automaticamente
using namespace std;

int main(){
    int anioNacimiento, anioActual, edad;

    // Obtener el año actual usando la biblioteca <ctime>
    time_t t = time(0);  // Obtiene el tiempo actual en segundos desde 1970
    tm* now = localtime(&t);    //Convierte los segundos a una fecha entendible
    anioActual = now->tm_year + 1900;  // Obtiene el año real

    //Solicitar al usuario su año de nacimiento
    cout<<"Ingresa el año de nacimiento\n";
    cin>>anioNacimiento;

    //Calcular la edad
    edad=anioActual-anioNacimiento;

    //Mostrar el resultado
    cout<<"Tienes "<<edad<<" años\n";
    return 0;
} 
