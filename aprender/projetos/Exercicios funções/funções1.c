#include <stdio.h>
int a, b;
int main ()
{
    entrada ();
    saida ();
    return 0;
}
void entrada ()
{
    printf ("Insira dois valores: \n");
    scanf ("%i", &a);
    scanf ("%i", &b);

}
int saida ()
{
    if (a < b)
    {
        printf ("O menor valor foi de: %i", a);
    }
    else
    {
        printf ("O menor valor foi de: %i", b);
    }
}
//SUCESSO
