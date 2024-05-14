/*Ingresar una cadena de caracteres de longitud máxima 10, enviarla como
parámetro a una función que maneje punteros de modo que retorne la misma
cadena de caracteres, pero en mayúsculas.
*/

#include <iostream>
#include <cstring> // TOUPPER

using namespace std;

void cadenaMayus(char *ptr) {
    while (*ptr != '\0') { // Mientras no se llegue al final de la cadena
        *ptr = toupper(*ptr); 
        ptr++; // Mover el puntero al siguiente carácter
    }
}

int main() {
    char cadena[11]; // Dejamos espacio para 10 caracteres más el carácter nulo '\0'
    char *puntero;
    puntero = &cadena[0];


    cout << "Ingrese una cadena de caracteres (máximo 10 caracteres): ";
    cin.getline(cadena, 11); // Lee la cadena incluyendo espacios y considerando el carácter nulo

    cadenaMayus(puntero);
    cout << "La cadena en mayúsculas es: " << cadena << endl;

}
