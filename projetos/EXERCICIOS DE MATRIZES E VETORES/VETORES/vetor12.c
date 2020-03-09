#include <stdio.h>
int main ()
{
    int numeros[5] = {0};
    printf ("Insira 5 numeros: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf ("%i", &numeros[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j)
        {
            if (numeros[i] > numeros[j])
            {
                int a = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = a;
            }
        }
    }
    float media = (numeros[4] + numeros[0])/2;
    printf ("A media entre o maior valor e o menor foi de: %f", media);
    return 0;
}
//SUCESSO
