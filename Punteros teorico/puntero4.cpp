/*4. Realizar un programa que rellene de forma aleatoria con los primeros 100
números un arreglo de 15 elementos. Mostrar por medio de punteros los valores
en el vector y la dirección de memoria de cada uno.*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a[15];
    int *punt;

    srand(time(0)); // Inicializar la semilla para números aleatorios

    punt = &a[0]; // Apuntar al primer elemento del arreglo

// un for para rellenar
    for (int i = 0; i < 15; i++) {
        a[i] = rand() % 100 + 1; 
    }
// un for para mostrar por pantalla
    for (int i = 0; i < 15; i++) {
        cout << "El valor en el vector en posición " << i << " es " << *punt << endl;
        cout << "La dirección en el vector en posición " << i << " es " << punt << endl;

        punt++; // IMPORTANTE . MOVER EL PUNTERO. 
        //SINO PUNT SIEMPRE VA A APUNTAR A a[0]
    }

}
