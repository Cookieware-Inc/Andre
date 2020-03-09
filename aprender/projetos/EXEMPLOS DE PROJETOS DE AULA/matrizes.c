#include <stdio.h>
#define bimestresAnuais 4
#define notasDeAlunos 4
int main ()
{
    float notas[notasDeAlunos][bimestresAnuais] = {0};
    float media[bimestresAnuais] = {0};
    float soma = 0;
    for (int i = 0; i < bimestresAnuais; ++i)
    {
        for (int j = 0; j < notasDeAlunos; ++j)
        {
            printf ("Insira a %io nota do aluno %i: ", j + 1, i + 1);
            scanf ("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media[i] = soma / bimestresAnuais;
        printf ("-----------------------------------------------\n");
        printf ("A media do aluno %i foi de: %f\n", i + 1, media[i]);
        printf ("-----------------------------------------------\n\n");
        soma = 0;
    }
    return 0;
}
