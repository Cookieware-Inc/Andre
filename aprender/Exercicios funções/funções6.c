#include <stdio.h>
int parOuImpar (int i), soma = 0;
int main ()
{
    int n;
    printf ("Digite um valor: ");
    scanf ("%i", &n);
    printf ("O numero da questao em resposta foi de: %i\n", parOuImpar (n));
    return 0;
}
int parOuImpar (int i)
{
    if (i % 2 == 0)
    {
        soma += 1;
    }
    else
    {
        if (i % 2 == 1)
        {
            soma == 0;
        }
    }
    return soma;
}
//SUCESSO há variass formas de escrever esse codigo, a usado foi de funções, mas tem mais
