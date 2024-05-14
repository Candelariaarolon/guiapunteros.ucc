/*8. Realice un programa que permita ingresar una cadena de caracteres de máximo
50 elementos, la envíe como parámetro a una función que utilizando punteros y
retorne el número de vocales minúsculas que contiene la cadena
*/


#include <iostream>
using namespace std;

int vocalesMinusculas(char *pun) {
    int contador = 0;
    while (*pun != '\0') {
        char caracter = *pun;
        if (caracter >= 'a' && caracter <= 'z') { 
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
                contador++;
            }
        }
        pun++; // siguiente carácter
    }
    return contador; //RETORNO EL NUMERO
}

int main() {
    char cadena[51]; // 50 caract + 1 para '\0'
    char *punt;
    
    cout << "Ingrese una cadena decaracteres  (max 50): ";
    cin.getline(cadena, 51);
    
    punt= &cadena[0];
    int numVocales = vocalesMinusculas(punt);
    //la cant de vocales sera el num que retona contador de la funcion
    cout << "La cadena contiene " << numVocales << " vocales minúsculas." << endl;

    return 0;
}

