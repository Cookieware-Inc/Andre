#include <stdio.h>
int main ()
{
    int numeros[5] = {0};
    int posicao[5] = {1, 2, 3, 4, 5};
    printf ("Insira 5 numeros: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    printf ("\n");
    for (int i = 0; i < 5; ++i)
    {
        if (numeros[i] > numeros[i + 1])
        {
            printf ("%i ", posicao[i]);
        }
    }
    return 0;
}
//SUCESSO
