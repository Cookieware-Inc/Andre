#include <stdio.h>
int main ()
{
    int numeros[10] = {0};
    int soma, c = 0;
    printf ("Insira 10 numeros: \n");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%i", &numeros[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
        if (numeros[i] < 0)
        {
            c++;
        }
        if (numeros[i] >= 0)
        {
            soma += numeros[i];
        }
    }
    printf ("O quantidades de numeros negativos foi de: %i\n", c);
    printf ("A soma dos valores positivos foi de: %i", soma);
    return 0;
}
//SUCESSO
