#include <stdio.h>
int main ()
{
    float notas [5]={0};
    float media = 0, total = 0;
    printf ("Digite 5 notas: \n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%f\n", &notas [i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        total += notas [i];
    }
    media = total / 5;
    printf ("A media do aluno foi de %f", media);
}
