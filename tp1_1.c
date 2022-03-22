#include <stdio.h>

int main(){

    int *punt, var;

    printf("Hola mundo");

    var = 5;
    punt = &var;

    printf("\nEl contenido del puntero es: %d", *punt);
    printf("\nDireccion de memoria almacenada por el puntero: %d", punt); 
    printf("\nDireccion de memoria de la varible %d", &var);
    printf("\nDireccion de memoria del puntero: %d", &punt);
    printf("\nTamanio de memoria utilizado por la variable: %d", sizeof(var));
    return 0;

}
