#include <stdio.h>
int notas[3] = {0}, pesos[3] = {0};
float soma, soma1, resultado;
int letra;
int main ()
{
    void entrada ();
    float mediaAritimetica ();
    float mediaPondera ();
    float mediaHarmonica ();
    void saida ();
    printf ("Qual dos tipos de media deseja trabalhar?\n\n");
    printf ("1--------------Media   Aritimetica\n");
    printf ("2--------------Media       Pondera\n");
    printf ("3--------------Media     Harmonica\n");
    printf ("\nInsira um valor: ");
    scanf ("%i", &letra);
    printf ("-----------------------------------------\n");
    switch (letra)
    {
        case 1:
            entrada ();
            mediaAritimetica ();
            saida ();
        break;
        case 2:
            entrada ();
            mediaPondera ();
            saida ();
        break;
        case 3:
            entrada ();
            mediaHarmonica ();
            saida ();
        break;
        default:
        printf ("Opcao invalida!");
    }
    return 0;
}
void entrada ()
{
    printf ("Insira 3 notas: \n");
    for (int i = 0; i < 3; ++i)
    {
        scanf ("%i", &notas[i]);
    }
}
float mediaAritimetica ()
{
    for (int i = 0; i < 3; ++i)
    {
        soma += notas[i];
        resultado = soma / 3;
    }
}
float mediaPondera ()
{
    for (int i = 0; i < 3; ++i)
    {
        printf ("Qual e o peso da nota (nota %i)? ", i + 1);
        scanf ("%i", &pesos[i]);
    }
    for (int i = 0; i < 3; ++i)
    {
        soma += notas[i] * pesos[i];
        soma1 += pesos[i];
        resultado = soma/soma1;
    }
}
float mediaHarmonica ()
{
    for (int i = 0; i < 3; ++i)
    {
        soma += 1/notas[i];
        resultado = 3/soma;
    }
}
void saida ()
{
    printf ("O resultado da operacao foi de: %f", resultado);
}
//SUCESSO
