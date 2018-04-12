#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/************************************************/

/** \brief funcion que suma dos paremetros de tipo flotante
 *
 * \param  numero1 primer parametro de tipo flotante
 * \param  numero2 segundo parametro de tipo flotante
 * \return resultado. A resultado se le asigna el valor de la suma de los valores de numero1, numero2.
 *
 */
float funcionSumar(float,float);

/***********************************************/

/** \brief funcion que resta dos paremetros de tipo flotante
 *
 * \param  numero1 primer parametro de tipo flotante
 * \param  numero2 segundo parametro de tipo flotante
 * \return resultado. A resultado se le asigna el valor de la resta de los valores de numero1, numero2.
 *
 */
float funcionRestar(float,float);

/***********************************************/

/** \brief funcion que divide dos paremetros de tipo flotante
 *
 * \param  numero1 primer parametro de tipo flotante
 * \param  numero2 segundo parametro de tipo flotante
 * \return resultado. A resultado se le asigna el valor de la dision de los valores de numero1, numero2.
 * \return si el valor asignado al divisor es cero retorna el mensaje de error "No se puede dividir por 0"
 */
float funcionDividir(float,float);

/***********************************************/

/** \brief funcion que multiplica dos paremetros de tipo flotante
 *
 * \param  numero1 primer parametro de tipo flotante
 * \param  numero2 segundo parametro de tipo flotante
 * \return resultado. A resultado se le asigna el valor de la multiplicación de los valores de numero1, numero2.
 *
 */
float funcionMultiplicar(float,float);

/***********************************************/

/** \brief funcion que calcula el factorial de un numero entero positivo
 *
 * \param  numero1 parametro de tipo entero
 * \return resultado. A resultado se le asigna el valor de factorizar el valor asignado a numero1
 * \return si el valor asignado a numero1 es "0" se le asirna a resultado el valor "1"
 * \return si el valor asignado a numero1 es menor a cero se le muestra el mensaje de error "No se pueden factorizar negativos"
 *
 */
int funcionFactorial(int);

/***********************************************/

/** \brief funcion que llama a las funciones funcionSumar, funcionMultiplicar, funcionDividir y funcionFactorial
 *
 * \param  numero1 primer parametro de tipo flotante
 * \param  numero2 segundo parametro de tipo flotante
 * \return no retorna valores.
 *
 */
void funcionTodasLasOperaciones(float,float);

/***********************************************/


/********DEFINICIONDE FUNCIONES****************/

int factorial = 1;

float funcionSumar(float numero1,float numero2){

    float resultado;

    resultado = numero1 + numero2;

    return resultado;

}

float funcionRestar(float numero1,float numero2){

    float resultado;

    resultado = numero1 - numero2;

    return resultado;

}

float funcionDividir(float numero1,float numero2){

    float resultado;

    if(numero2 == 0){

        printf("\n No se puede dividir por 0 \n");

    }
    else{

            resultado = numero1/numero2;

    }
    return resultado;
}

float funcionMultiplicar(float numero1,float numero2){

    float resultado;

    resultado = numero1 * numero2;

    return resultado;

}

int funcionFactorial(int numero1){

    int b;
    int factorial = 1;

    if(numero1 > 0)
    {
       for (b = numero1; b > 1; b--)
        {
            factorial = factorial * b;

        }
    }
    else if(numero1 == 0)
    {
        factorial = 1;
    }
    else
    {

     printf("\n No se pueden factorizar negativos \n");

    }
    return factorial;
}


void funcionTodasLasOperaciones(float numero1,float numero2){

    float resultado_de_sumar,resultado_de_restar,resultado_de_dividir,resultado_de_multiplicar,resultado_de_factorial;


            resultado_de_sumar = funcionSumar(numero1,numero2);
            printf("\n El resultado de la suma  es: %f \n",resultado_de_sumar);
            resultado_de_restar = funcionRestar(numero1,numero2);
            printf("\n El resultado de la resta es: %f \n",resultado_de_restar);
            resultado_de_dividir = funcionDividir(numero1,numero2);
            printf("\n El resultado de la divicion es: %f \n",resultado_de_dividir);
            resultado_de_multiplicar = funcionMultiplicar(numero1,numero2);
            printf("\n El resultado de la multiplicacion es: %f \n",resultado_de_multiplicar);
            resultado_de_factorial = funcionFactorial(numero1);
            printf("\n El resultado del factorial es: %f \n",resultado_de_factorial);

}

/********DEFINICIONDE FUNCIONES****************/

#endif // FUNCIONES_H_INCLUDE
