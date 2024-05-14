
/*. Escribir un programa que declare e inicialice dos variables enteras y un puntero a
entero. A continuación, asigne al puntero la dirección de la primera variable e
imprima la dirección de memoria apuntada y su contenido. Repetir la operación
para la segunda variable.*/

#include <iostream>
using namespace std;

int main(){

int var1=10, var2=15;
int *ptr;

ptr = &var1;
cout<<"el valor de la direc de memoria es: "<< ptr<<endl;
cout<<"el valor del contenido en la direc es es: "<< *ptr <<endl;
ptr = &var2;
cout<<"el valor de la direc de memoria es: "<< ptr<<endl;
cout<<"el valor del contenido en la direc es es: "<< *ptr <<endl;



}