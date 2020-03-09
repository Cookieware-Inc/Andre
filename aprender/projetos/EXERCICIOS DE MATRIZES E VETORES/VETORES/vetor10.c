#include <stdio.h>
int main ()
{
    int notas[15] = {0}, soma;
    float mediaGeral;
    printf ("Insira 15 dos seus alunos: \n");
    for (int i = 0; i < 15; ++i)
    {
        scanf ("%i", &notas[i]);
    }
    for (int i = 0; i < 15; ++i)
    {
        soma += notas[i];
    }
    mediaGeral = soma / 15;
    printf ("A nota geral da turma foi de %f", mediaGeral);
    return 0;
}
//SUCESSO
