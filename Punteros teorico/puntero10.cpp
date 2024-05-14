
/*
10. Se pide crear un programa que haciendo uso de la reserva dinámica de memoria
almacene un número determinado de valores (n) obtenidos de forma aleatoria,
entre 0 y 100 y los ordene de mayor a menor*/

#include <iostream>
#include <cstdlib>
#include <ctime> // Para usar la función time()
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de valores para ordenar: ";
    cin >> n;

    // Verificar que n sea mayor que 0
    if (n <= 0) {
        cout << "El número de valores debe ser mayor que cero." << endl;
    }

    // arreglo dinámico de num int
    int *ptr = new int[n];

    
    srand(time(0)); 
    for (int i = 0; i < n; i++) {
        ptr[i] = rand() % 101; // esa posicion del puntro apunta a la direc del numeor random: PONGO 101 pero sera hasta 100
    }

    cout << "Valores generados originalmente:" << endl;
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    //la cadena que genero en un principio

//uso metodo burbuja
    for (int i = 0; i < n - 1; i++) {
        //determina cuántas veces se necesita repetir la comparación e intercambio
        //para cada num recorro cada elem hasta el penultimo comparando 
        for (int j = 0; j < n - i - 1; j++) {
            // Restamos 1 porque queremos comparar cada elemento con su siguiente elemento, Y EL ULTIMO NO TIENE SIGUIENTE
            if (ptr[j] < ptr[j + 1]) {
                
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }

    // cuando accedemos a ptr[j], estamos accediendo al valor almacenado
    // en la posición j del arreglo, no a la dirección de memoria en sí.

    cout << "Valores ordenados de mayor a menor:" << endl;
    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    delete[] ptr;
    //libero por new
}

