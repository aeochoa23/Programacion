/*Programa: Calcular el descuento en una compra
Objetivo: Determinar el porcentaje de descuento aplicado en un producto*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main(){
    double precio_original, precio_descuento, porcentaje_descuento;

    //Solicitar el precio con descuento
    cout<<"Ingresa el valor original del producto\n";
    cin>>precio_original;

    //Solicitar el precio con descuento
    cout<<"Ingresa el precio final del producto tras el descuento\n";
    cin>>precio_descuento;

    //Validar que los valores sean correctos
    if(precio_original <= 0  ||  precio_descuento < 0  ||  precio_original < precio_descuento){
        cout<<"Error, valores invalidos\n";
    }
    else{
        //Calcular el porcentaje de descuento
        porcentaje_descuento = ((precio_original - precio_descuento) / precio_original) * 100;

        //Mostrar el resultado
        cout<<"El descuento aplicado es del "<<porcentaje_descuento<<"% \n";
    }

    return 0;
}