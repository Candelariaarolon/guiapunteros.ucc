/*Escribir un programa que declare un arreglo de 5 enteros, y un puntero a entero.
Comprobar que los elementos del arreglo ocupan posiciones sucesivas en
memoria, escribiendo sus direcciones.*/

#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // Asignar la dirección de memoria del primer elemento del arreglo a ptr
    ptr = &a[0];

    // Imprimir las direcciones de todos los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        cout << "Dirección de a[" << i << "]: " << ptr << endl;
        ptr++;
    }


}



