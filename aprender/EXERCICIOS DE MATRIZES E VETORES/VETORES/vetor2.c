#include <stdio.h>
int main ()
{
    int vetor [6] = {0};
    printf ("Digite 6 valores: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf ("%i ", &vetor[i]);
    }
    for (int i = 0; i < 6; ++i)
    {
        printf ("\nO valores digitados foram: %i ", vetor [i]);
    }
    return 0;
}
// SUCESSO
