/*Programa: Cálculo del área de un circulo
Objetivo: Leer el radio de un circulo y calcular su area*/

#include <iostream> //Biblioteca estandar para entrada y salida
#include <cmath>   //Biblioteca para funciones matematicas
using namespace std;

int main(){
    const double PI=3.14159;    //Definición de la constante PI
    double radio, area;     //Variables para almacenar el radio y el area

    //Solicita al usuario ingresar el radio del circulo
    cout<<"Ingresa el radio\n";
    cin>>radio;

    //Calcula el area del círculo
    area = PI * pow(radio,2);

    //Muestra el resultado
    cout<<"El area del circulo es de "<<area<<"\n";

    return 0;
}