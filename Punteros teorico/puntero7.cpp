#include <iostream>
using namespace std;


void copia(char *origen, char *destino) {
    while (*origen != '\0') {
        *destino = *origen; 
        origen++; // Avanzar al siguiente carácter
        destino++; // Avanzar al siguiente espacio 
    }
     
}

int main() {
    char cadena_origen[] = "Hola, mundo!";
    char cadena_destino[50]; // Asegurar espacio suficiente para la copia

    char *punt_origen, *punt_desti;
    punt_origen= &cadena_origen[0];
    punt_desti= &cadena_destino[0];

    copia(cadena_origen, cadena_destino); // Llamar a la función copia

    cout << "Cadena copiada: " << cadena_destino << endl;

    return 0;
}

