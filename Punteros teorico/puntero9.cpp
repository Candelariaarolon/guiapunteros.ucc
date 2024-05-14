/*9. Definir un arreglo unidimensional de N componentes enteras de modo que la
gestión de memoria sea dinámica utilizando new. Ingresar los datos en el vector.
Mostrar el contenido del vector en dos modos: usando notación vectorial y luego
usando aritmética de punteros.
*/

//UNIDIMENSIONAL a[n]

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos para el arreglo: ";
    cin >> n;

    int *arreglo = new int[n]; 

    cout << "Ingrese " << n << " elementos para el arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento" << i + 1 << ": ";
        cin >> arreglo[i]; 

    
    }

        // corchetes para notación vectorial 
    cout << "Contenido del arreglo usando notación vectorial:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // aritmética de punteros
    cout << "Contenido del arreglo usando aritmética de punteros:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arreglo + i) << " ";
        //accedo a la posicion de memoria en i, no es que se suman
    }
    cout << endl;

    /*Cuando haces arreglo + i, estás moviéndote i posiciones a partir de la dirección de memoria inicial del arreglo. En otras palabras, estás desplazándote i elementos a lo largo del arreglo.

    Entonces, *(arreglo + i) se refiere al valor almacenado en la dirección de memoria obtenida al desplazarte i elementos desde la dirección inicial de arreglo.

    La posición 0 del arreglo se accede cuando i es 0, por lo que *(arreglo + 0) apunta al primer elemento del arreglo, y es equivalente a arreglo[0].*/

    // Liberando la memoria asignada
    delete[] arreglo;

    return 0;
}


/*Notación Vectorial:

En este caso, accedes a los elementos del arreglo utilizando corchetes [] y el índice del elemento.
El acceso a los elementos se realiza de manera directa, como si estuvieras accediendo a elementos de un vector estático.
El cout para mostrar el contenido del arreglo usando notación vectorial sería simplemente cout << arreglo[i] << " ";.
Aritmética de Punteros:

En este caso, accedes a los elementos del arreglo utilizando aritmética de punteros, es decir, avanzando a través de las direcciones de memoria.
En lugar de utilizar corchetes [], utilizas la aritmética de punteros para acceder a los elementos.
El cout para mostrar el contenido del arreglo usando aritmética de punteros sería cout << *(arreglo + i) << " ";.*/