#include <stdio.h>
int main ()
{
    float valor [10] = {0};
    float resultado [10] = {0};
    printf ("Digite 10 valores paar o calculo: \n");
    for (int i = 0; i < 10; ++i)
    {
        scanf ("%f ", &valor[i]);
        resultado [i] = valor [i] * valor [i];
    }
    for (int i = 0; i < 10; ++i)
    {
        printf ("%f ", resultado [i]);
    }
    return 0;
}
//SUCESSO
