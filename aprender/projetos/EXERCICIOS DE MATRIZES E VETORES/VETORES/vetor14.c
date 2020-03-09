#include <stdio.h>
int main ()
{
    int vetor[10] = {0};
    for (int i = 0; i < 10; ++i)
    {
        printf ("Digite o %i valor: ", i + 1);
        scanf ("%i", &vetor[i]);
    }
    printf ("O(s) valor(es) igual(is): ");
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (vetor[i] == vetor[j])
            {
                printf ("%i\n", vetor[i]);
            }
        }
    }
    return 0;
}
//SUCESSO
