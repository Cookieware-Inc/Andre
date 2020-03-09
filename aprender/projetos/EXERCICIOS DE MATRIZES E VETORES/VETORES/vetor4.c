#include <stdio.h>
int main ()
{
    int posicoes [8] = {0};
    int x, y;
    printf ("Digite 8 valores: \n");
    for (int i = 0; i < 8; ++i)
    {
        scanf ("%i ", &posicoes[i]);
    }
    for (int i = 0; i < 8; ++i)
    {
        printf ("%i ", posicoes[i]);
    }
    x = posicoes [4];
    y = posicoes [1];
    int soma = x + y;
    printf ("\nO valor da soma do vetor na posicao 4 e 1 foi de :%i", soma);
    return 0;
}
//SUCESSO
