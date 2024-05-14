/*
12. Obtener un programa que permita reservar memoria dinámica para un arreglo
bidimensional de datos reales realizando los siguientes pasos:
a. Crear un puntero a punteros del tipo de datos correspondiente.
b. Reservar memoria para el arreglo de filas.
c. Hacer un bucle para reservar memoria para las columnas de cada fila:
d. Ingresar los datos y mostrar su contenido usando índices y el operador de
indexación [].
e. Liberar la memoria asignada.

*/
// Teorico
/*float *ptr sería un puntero a un solo elemento de tipo float.
float **ptr es un puntero a un puntero, lo que implica que ptr 
apunta a una dirección de memoria que contiene otro puntero, 
que a su vez apunta a un valor float.*/


#include <iostream>


//NO SUPER HACERLO 

    int  memorianew(**puntero_arreglo, filas, columnas){


    }

int main() {
    int filas, columnas;


    std::cout << "Ingrese el número de filas del arreglo: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas del arreglo: ";
    std::cin >> columnas;

    float **puntero_arreglo = memorianew(filas, columnas); 

  
}


