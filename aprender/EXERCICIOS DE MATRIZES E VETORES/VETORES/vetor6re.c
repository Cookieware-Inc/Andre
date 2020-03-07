#include <stdio.h>
int main ()
{
    int numeros [5] = {0};
    printf ("Digite 10 numeros: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%i ", &numeros[i]);  // VALORES GUARDADOS PARA SEREM PROCESSADOS
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i + 1; j < 5; ++j) // CRIA UM VALOR PARA SER COMPARADO COM O ORIGINAL
        {
            if (numeros[i] > numeros[j]) // MUDANDO O SINAL DA OPERÇÃO LÓGICA MUDA A ORDEM
            {
                int a = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = a;
            }
        }
    }
    printf ("Os numeros na forma crescente sao: \n" );
    for (int i = 0; i < 5; ++i)
    {
        printf ("%i ", numeros[i]);
    }
}
//REVISAR
