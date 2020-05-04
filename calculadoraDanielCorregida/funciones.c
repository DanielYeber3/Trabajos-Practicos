#include <stdio.h>
#include "funciones.h"


float getIn(float numero)
{

    printf("Ingrese un numero");
    scanf("%f",&numero);

    return numero;

}

int suma(float numUno, float numDos)
{
    int resultado;

    resultado= numUno + numDos;

    return resultado;

}

int resta(float numUno, float numDos)
{
    int resultado;

    resultado= numUno - numDos;

    return resultado;

}

int multiplicacion(float numUno, float numDos)
{
    int resultado;

    resultado= numUno * numDos;

    return resultado;

}

float division(float numUno, float numDos)
{
    float resultado;

    if(numUno == 0 || numDos == 0)
    {
        resultado = printf("No es posible dividir por cero \n");

    }
    else
    {

        resultado= numUno / numDos;

    }

    return resultado;

}
float factorial(float numero)
{

    int factorial = 1;
    int i = 0;

    if(numero<0)
    {

        printf("No es posible calcular el factorial de un numero negativo");

    }

    for (i = numero; i > 0; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}
