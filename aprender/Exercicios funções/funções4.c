#include <stdio.h>
int numeros[5] = {0};
float soma;
int main ()
{
    void entrada ();
    int somaDeDivisores ();
    entrada ();
    somaDeDivisores ();
    return 0;
}
void entrada ()
{
    for (int i = 0; i < 5; ++i)
    {
        printf ("Insira o %i valor: ", i + 1);
        scanf ("%i", &numeros[i]);
    }
}
int somaDeDivisores ()
{
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 1; j <= numeros[i]; ++j)
        {
            if ((numeros[i] % j) == 0)
            {
                soma += numeros[i] / j;
            }
        }
        printf ("A soma dos divisores de %i foi de: %f\n", i + 1, soma-numeros[i]);
        soma = 0;
    }
}
//SUCESSO
