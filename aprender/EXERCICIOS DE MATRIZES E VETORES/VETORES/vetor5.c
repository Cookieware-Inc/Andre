#include <stdio.h>
int main ()
{
    int numeros [10] = {0};
    printf ("Digite 10 numeros: \n");
    for (int i = 0; i < 10; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        if (numeros [i] % 2 ==0)
        {
            printf ("\nE numero PAR %i", numeros[i]);
        }
        else
        {
            printf ("\nE numero IMPAR %i", numeros[i]);
        }
    }
    return 0;
}
//SUCESSO
