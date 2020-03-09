#include <stdio.h>
int parOuImpar (int n);
int resultado;
int main ()
{
    int valor;
    printf ("Digite um valor: ");
    scanf ("%i", &valor);
    printf ("O resultado da questao em numero foi de: %i", parOuImpar(valor));
    return 0;
}
int parOuImpar (int n)
{
    if ((n > 0)&& (n!=0))
    {
        resultado += 1;
    }
    else
    {
        if ((n < 0)&& (n!=0))
        {
            resultado = -1;
        }
        else
        {
            resultado = 0;
        }
    }
    return resultado;
}
//SUCESSO
