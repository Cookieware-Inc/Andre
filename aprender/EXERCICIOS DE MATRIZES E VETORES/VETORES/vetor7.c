#include <stdio.h>
int main ()
{
    int numeros[5] = {0};
    printf ("Digite 5 numeros: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (numeros[i] > numeros[j])
            {
                int a = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = a;
            }
        }
    }
    printf ("\n");
    printf ("O maior valor informado foi: %i", numeros[0]);
    return 0;
}
//SUCESSO
