#includes 'funciones.h'

//funcion sumar
float sumar(float,float){

    float operando_1.operando_2,result;

    result = operando_1 + operando_2;

    return result;
}
//funcion restar
float restar (float,float){

    result = operando_1 - operando_2;

    return result;
}
//funcion multiplicar
float multiplicar(float,float){

    result = operando_1 * operando_2

    return result;
}
//funcion dividir
float dividir(float,float){

    if (operando_2 < 0){

         result = ;
    }
    else
    {
        result = operando_1/operando_2
    }

    return result;
}
//funcion factorial
long int factorial(int)
{

 int n, i;
    unsigned long long factorial = 1;

    //printf("Enter an integer: ");
    //scanf("%d",&n);

    // mostrar errror si ingresa un negativo

    if (n < 0){

        result = ;//printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }

       result = factorial;


    }

    return result;

}
