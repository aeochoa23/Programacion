/*Programa: Calcular la suma de los primeros N numeros naturales
Objetivos: Leer un numero N e imprimir la suma de los primeros N numeros naturales*/

#include <iostream> //Biblioteca estandar para entrada y salida
using namespace std;

int main() {
    int n, i, suma = 0; //Variables: n(numero limite), i(contador del ciclo), suma(resultado de la suma)

    //Solicita al usuario ingresar cuantos numeros naturales desea sumar
    cout << "Ingresa cuantos numeros naturales quieres sumar:\n";
    cin >> n;

    //Ciclo para sumar los primeros N numeros naturales
    for (i = 1; i <= n; i++) {
        suma += i;  //Suma el valor de i a la variable suma
    }

    //Muestra el resultado
    cout << "La suma de los primeros "<<n<<" numeros naturales es: "<<suma<<"\n";
    
    return 0;
}
