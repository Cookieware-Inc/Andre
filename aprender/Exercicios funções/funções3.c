#include <stdio.h>
int resultado = 1, base, expo;
int main ()
{
    void entrada ();
    int exponenciacao ();
    entrada ();
    exponenciacao ();
    return 0;
}
void entrada ()
{
    printf ("Digite o valor da base: ");
    scanf ("%i", &base);
    printf ("Digite o valor do expoente: ");
    scanf ("%i", &expo);
}
int exponenciacao ()
{
    if (expo == 1)
    {
        printf ("\nO resultado foi de: %i", base);
    }
    for (int i = 1; i <= expo; ++i)
    {
        resultado *= base;
    }
    printf ("\nO resultado foi de: %i", resultado);
}
//SUCESSO
