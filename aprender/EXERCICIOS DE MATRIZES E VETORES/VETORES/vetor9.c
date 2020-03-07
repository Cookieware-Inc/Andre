#include <stdio.h>
int main ()
{
    int numeros[6] = {0};
    printf ("Insira 6 numeros: \n");
    for (int i = 0; i < 6; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    for (int i = 5; i >= 0; --i)
    {
        if (numeros[i] % 2 == 0)
        {
            printf ("%i ", numeros[i]);
        }
    }
    return 0;
}
//SUCESSO
