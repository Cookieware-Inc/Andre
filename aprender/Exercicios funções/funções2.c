#include <stdio.h>
float vetor[2]={0}, vetor1[2]={0};
float resultado;
int i;
int main ()
{
    void entrada ();
    entrada ();
    float propriedadeMatematica ();
    propriedadeMatematica ();
    return 0;
}
void entrada ()
{
    for (i = 0; i < 2; ++i)
    {
        printf ("Insira um o x valor: ");
        scanf ("%f", &vetor[i]);
        printf ("Insira um o y valor: ");
        scanf ("%f", &vetor1[i]);
    }
}
float propriedadeMatematica ()
{
    resultado = sqrt((vetor[1] - vetor[0])*(vetor[1] - vetor[0]) + (vetor1[1] - vetor1[0])*(vetor1[1] - vetor1[0]));
    printf ("%f", resultado);
}
//SUCESSO
