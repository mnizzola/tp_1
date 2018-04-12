#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion = 0;
    float numero1,numero2,resultado_de_sumar,resultado_de_restar,resultado_de_dividir,resultado_de_multiplicar,resultado_de_factorial;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
               scanf("%f",&numero1);
               printf("\n Ingreso el numero: %f \n",numero1);
               break;
            case 2:
                scanf("%f",&numero2);
                printf("\n Ingreso el numero: %f \n",numero2);
               break;
            case 3:
                resultado_de_sumar = funcionSumar(numero1,numero2);
                printf("\n El resultado de la suma  es: %f \n",resultado_de_sumar);
                break;
            case 4:
                resultado_de_restar = funcionRestar(numero1,numero2);
                printf("\n El resultado de la resta es: %f \n",resultado_de_restar);
                break;
            case 5:
                resultado_de_dividir = funcionDividir(numero1,numero2);
                printf("\n El resultado de la divicion es: %f \n",resultado_de_dividir);
                break;
            case 6:
                resultado_de_multiplicar = funcionMultiplicar(numero1,numero2);
                printf("\n El resultado de la multiplicacion es: %f \n",resultado_de_multiplicar);
                break;
            case 7:
                resultado_de_factorial = funcionFactorial(numero1);
                printf("\n El resultado del factorial es: %f \n",resultado_de_factorial);
                break;
            case 8:
                funcionTodasLasOperaciones(numero1, numero2);
                break;
            case 9:
                seguir = 'n';
                break;
        }



    }
    return 0;
}
