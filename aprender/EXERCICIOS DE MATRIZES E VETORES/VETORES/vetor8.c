#include <stdio.h>
int main ()
{
    int numeros[6] = {0};
    printf ("Insira 6 numeros a seguir: \n");
    for (int i = 0; i < 6; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    for (int i = 5; i >= 0; --i)
    {
        printf ("valor trocado: %i\n ", numeros[i]);
    }
    return 0;
}
//SUCESSO
