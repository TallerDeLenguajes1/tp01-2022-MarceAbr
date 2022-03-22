#include <stdio.h>

int cuadrado(int num);
void elevado(int num);
void datosVariable(int *num);
void invertir(int num1, int num2);
void orden(int a, int b);

int main(){

    int numero, resultado, valor1, valor2;

    printf("Digite un numero: ");
    scanf("%d", &numero);

    resultado = cuadrado(numero);
    printf("El resultado es: %d", resultado);
    elevado(numero);
    datosVariable(&numero);

    printf("\n\nDigite el primer valor: ");
    scanf("%d", &valor1);
    printf("Digite el segundo valor: ");
    scanf("%d", &valor2);

    invertir(valor1, valor2);
    orden(valor1, valor2);
    return 0;
}

//Funcion elevar al cuadrado

int cuadrado(int num)
{
    return num*num;
}

//Funcion elevar al cuadrado con void

void elevado(int num)
{
    printf("\nEl resultado elevado al cuadrado es: %d", num*num);
}

//Funcion mostrar dartos de la variable

void datosVariable(int *num)
{
    printf("\n\nLa direccion de memoria de la variable es: %d", num);
    printf("\nEl contenido de la variable es: %d", *num);
}

//Funcion para invertir las variables

void invertir(int num1, int num2)
{
    int aux;
    printf("\nValor 1 = %d", num1);
    printf("\nValor 2 = %d", num2);
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf("\n\nNuevo valor 1 = %d", num1);
    printf("\nNuevo valor 2 = %d", num2);
}

//Funcion para ordenar

void orden(int num1, int num2)
{
    int aux; 
    if(num1 < num2){
        printf("\n%d",num1);
        printf("\n%d",num2);  
    } else {
        aux = num1;
        num1 = num2;
        num2 = aux;
        printf("\n%d",num1);
        printf("\n%d",num2);   
    }  
}