#include <stdio.h>
int main ()
{
    int vetorA [6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        soma += vetorA[i];
    }
    printf ("%i \n", soma);
    vetorA [3] = 100;
    for (int i = 0; i < 6; i++)
    {
        printf ("%i ", vetorA[i]);
    }
    return 0;
}
//SUCESSO!!!
