/*
11. Se pide crear un programa que pida una serie de números al usuario y halle el
máximo, el mínimo y la media aritmética de ellos. Para ello se debe crear una variable puntero tipo float, 
pedir al usuario que introduzca el número de datos, y
sucesivamente los datos a cargar en el arreglo. Recordar que se debe reservar
memoria de forma dinámica.


*/
#include <iostream>

using namespace std;

float encontrarMax(float *puntero, int numdatos) {
    float maximo = puntero[0];
    for (int i = 1; i < numdatos; ++i) {
        if (puntero[i] > maximo) {
            maximo = puntero[i];
        }
    }
    return maximo;
}

// Función para encontrar el mínimo
float encontrarMin(float *punter, int num) {
    float minimo = punter[0];
    for (int i = 1; i < num; ++i) {
        if (punter[i] < minimo) {
            minimo = punter[i];
        }
    }
    return minimo;
}

// Función para calcular la media
float calc_media(float *puntmedia, int ndatos) {
    float suma = 0;
    for (int i = 0; i < ndatos; ++i) {
        suma += puntmedia[i];
    }
    return suma / ndatos;
}

int main() {
    int n;
    float *punteronum;

    cout << "Ingrese el número de datos: ";
    cin >> n;

    punteronum = new float[n];

    cout << "Ingrese los números ";
    for (int i = 0; i < n; ++i) {
        cin >> punteronum[i];
    }

    float maximo = encontrarMax(punteronum, n);
    float minimo = encontrarMin(punteronum, n);
    float media = calc_media(punteronum,n);
    cout << "El máximo es: " << maximo << endl;
    cout << "El mínimo es: " << minimo << endl;
    cout << "La media es: " << media << endl;

    delete[] punteronum;

    return 0;
}