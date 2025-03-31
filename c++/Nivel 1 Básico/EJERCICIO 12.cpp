/* Programa: Intercambiar los valores de dos variables
Objetivo: Intercambiar los valores de dos variables ingresadas por el usuario.*/

#include <iostream> // Biblioteca estándar para entrada y salida
using namespace std;

int main(){
    int a, b, temp;  // Variables: a y b (valores a intercambiar), temp (variable temporal)

    // Solicitar al usuario los valores de las variables
    cout<<"Ingresa el primer valor\n";
    cin>>a;
    cout<<"Ingresa el segundo valor:\n";
    cin>>b;

    // Mostrar valores originales
    cout<<"Valores antes del intercambio: a= "<<a<<", b = " <<b<<"\n";

    // Intercambio de valores usando una variable auxiliar
    temp = a;
    a = b;
    b = temp;

    // Mostrar valores después del intercambio
    cout<<"Valores después del intercambio: a = "<<a<<", b = "<<b<<"\n";
    
    return 0;
}
