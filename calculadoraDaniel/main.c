#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"


int main()
{
    float numUno;
    float numDos;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorialUno;
    int resultadoFactorialDos;
    int respuesta;


    do
    {



        printf("Bienvenido al menu. \n1: Ingrese el primer operando \n2: Ingrese el segundo operando \n3: Calcular todas las operaciones \n4: Informar resultados \n5: Salir \n");

        printf ("Ingrese un numero: ");
        scanf ("%d", &respuesta);

        switch (respuesta)
        {
        case 1:

            numUno = getIn(numUno);

            system("cls");

            break;
        case 2:

            numDos = getIn(numDos);

            system("cls");

            break;
        case 3:

            resultadoSuma=suma(numUno,numDos);
            resultadoResta=resta(numUno,numDos);
            resultadoDivision=division(numUno,numDos);
            resultadoMultiplicacion=multiplicacion(numUno,numDos);
            resultadoFactorialUno= factorial(numUno);
            resultadoFactorialDos= factorial(numDos);

            system("cls");

            break;
        case 4:
            printf(" la suma es %d \n", resultadoSuma);
            printf(" la resta es %d \n", resultadoResta);
            printf(" la multiplicacion es %d \n", resultadoMultiplicacion);
            printf(" la division es %2.f \n", resultadoDivision);
            printf(" El factorial del primero numero es: %d \n", resultadoFactorialUno);
            printf(" El factorial del segundo numero es: %d \n", resultadoFactorialDos);

            break;
        case 5:

            break;

        default:
            printf("El numero ingresado no esta dentro de los parametros de medicion \n");

            break;



        }


    }
    while(respuesta!=5);

}
