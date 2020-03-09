#include <stdio.h>
int main ()
{
    int numeros[5] = {0};
    printf ("Digite 5 numeros: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (numeros[i] > numeros[j])
            {
                int a = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = a;
            }
        }
    }
    printf ("A sequencia ordenada de forma decrescente foi de: ");
    for (int i = 0; i < 5; ++i)
    {
        printf ("%i ", numeros[i]);
    }
    return 0;
}
//SUCESSO
