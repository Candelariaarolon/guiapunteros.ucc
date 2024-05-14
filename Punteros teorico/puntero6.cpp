/*6. Realizar un programa que ingrese una cadena de caracteres de máximo 50
elementos y la envíe como parámetro a una función que maneje punteros
de modo que la función invierta la cadena.*/


#include <iostream>
using namespace std;

void invertircadena(char *ptr) {
    // Mover el puntero al final de la cadena
    char *ultimo = ptr;
    while (*ultimo != '\0') {
        ultimo++;
        ultimo--; // Retroceder una posición último carácter antes del nulo
    } //EL WHILE CUANDO TEMRINE EL ULTIMO VA A SER \0

    //lo inicializo en ptr pero lo muevo hasta que apunte al ulitmo caracter

    /*Puntero ultimo: Este puntero se inicializa al principio apuntando al mismo lugar que el puntero ptr, 
    que es el inicio de la cadena. Luego, se recorre la cadena avanzando ultimo hasta llegar al carácter nulo '\0',
    que indica el final de la cadena. Al hacer ultimo++; en cada iteración del bucle, ultimo se mueve al siguiente 
    carácter en la cadena hasta llegar al final. Después de este bucle, ultimo apunta al carácter nulo \0 que marca el fin de la cadena.*/

    char *primero = ptr;
    while (primero < ultimo) {
        char temp = *primero;
        *primero = *ultimo;
        *ultimo = temp;
        primero++;
        ultimo--;
    }
    /*Puntero primero: Este puntero también se inicializa apuntando al inicio de la cadena, es decir, al mismo lugar que ptr.
     La idea de tener primero es que, a medida que ultimo se va moviendo al final de la cadena, primero se va moviendo hacia
     el inicio de la cadena. De esta forma, al intercambiar caracteres en el bucle while (primero < ultimo), estás efectivamente
      invirtiendo la cadena.*/
}

int main() {
    char cadena[51];
    char *puntero;

    puntero = &cadena[0]; // == puntero = cadena

    cout << "Ingrese una cadena de caracteres (máximo 50 caracteres): ";
    cin.getline(cadena, 51);

    invertircadena(puntero);

    cout << "Cadena invertida: " << cadena << endl;

    return 0;
}
