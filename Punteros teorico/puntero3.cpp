/*Para el arreglo de 5 enteros, declare dos punteros a entero y asigneles
las direcciones del primer y último elemento del arreglo. Imprima la diferencia
entre ambos punteros.*/

#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr, *puntero;

    ptr = &a[0];       // Puntero al primer el del arreglo
    puntero = &a[4];   // Puntero al último el del arreglo

    int diferencia;
    diferencia = puntero - ptr;  // Diferencia de direcciones en bytes

    cout << "Diferencia entre los punteros: " << diferencia << endl;

    return 0;
}
