#include <stdio.h>
int main ()
{
    int n, f, fre, soma, t, recu, pts;
    char nome[100];
    float media;
    printf ("---------------------------------------------\n");
    printf ("        BEM VINDO AO MEDIANO TURMAS\n");
    printf ("---------------------------------------------\n");
    printf ("Quantos alunos sua turma possue? ");
    scanf ("%i", &t);
    printf ("Quantas notas sua disciplina possue? ");
    scanf ("%i", &n);
    printf ("Informe a nota minima: ");
    scanf ("%i", &recu);
    soma = 0;
    printf ("---------------------------------------------\n");
    for (int contador=1; contador <= t; ++contador)
    {
        printf ("Qual o nome do aluno? ");
        scanf ("%s", &nome);
        for (int nota=1; nota <= n; nota++)
        {

            printf ("Digite a %i* nota: ", nota);
            scanf ("%i", &pts);
            soma += pts;
        }
        media = soma / n;
        printf ("\n---------------------------------------------\n");
        printf ("A nota media de %s foi de %f ", nome, media);
        if (media < recu)
        {
            printf ("\nO %s esta de recuperacao\n", nome);
        }
        else if (media > recu)
        {
            printf ("\nO aluno %s passou na materia!\n", nome);
        }
        printf ("---------------------------------------------\n");
    }

    return 0;
}
