#include <stdio.h>
#include <math.h>
float funcaoAfim ();
float funcaoSegundoGrau ();
float funcaoExponencial ();
float funcaoLogaritmica ();
float funcaoTrigonometrica ();
int propiedade, valor, m, x, y, resultado, b, a, c;
float xVertice, yVertice, a1, b1;
int main (void)
{
    int numero;
    char resp ='S';
    printf ("Seja bem vindo as funcoes matematicas...");
    printf ("\n\n");
    while (resp == 'S' || resp == 's')
    {
        printf ("\n\nEscolha qual formula deseja trabalhar\n\n");
        printf ("-----------------------------------------\n");
        printf ("1-FUNCAO AFIM\n");
        printf ("2-FUNCAO 2o GRAU\n");
        printf ("3-FUNCAO EXPONENCIAL\n");
        //printf ("4-FUNCAO LOGARITMICA\n");
        //printf ("5-FUNCAO TRIGONOMETRICA\n");
        printf ("-----------------------------------------\n");
        scanf ("%i", &numero);
        switch (numero) {
            case 1:
                funcaoAfim ();
                break;
            case 2:
                funcaoSegundoGrau ();
                break;
            case 3:
                funcaoExponencial ();
                break;
            /*case 4:
                funcaoLogaritmica ();
                break;*/
            /*case 5:
                funcaoTrigonometrica ();
                break;*/
            default:
                if (numero > 3 || numero < 1)   //DEPOIS MUDAR PARA 5!!!!!!!!!!!
                {
                    printf ("opcao invalida!");
                }
                break;
        }
        printf ("\n\nDeseja continuar [S/N]");
        scanf ("%s", &resp);
        while ((getchar () !='\n')&&(!EOF));
        printf("\n*===============================*\n");
    }
    return 0;
}
float funcaoAfim ()
{
    printf ("Qual propiedade queres saber? \n");
    printf ("1-PONTO DO EIXO Y\n");
    printf ("2-PONTO DE EIXO X\n");
    printf ("3-FORMULA GERAL\n");
    printf ("4-CRESCENTE OU DESCRESCENTE\n");
    printf (">>");
    scanf ("%i", &propiedade);
    printf ("\n");
    switch (propiedade)
    {
        case 1:
            printf ("De o valor de (b): ");
            scanf ("%i", &b);
            printf ("O valor de Y: %i", b);
            break;
        case 2:
            printf ("De o valor de (a): ");
            scanf ("%i", &a);
            printf ("De o valor de (b): ");
            scanf ("%i", &b);
            xVertice = (-b)/a;
            printf ("O ponto ou raiz de X: %f", xVertice);
            break;
        case 3:
            printf ("De o valor de (m)declive: ");
            scanf ("%i", &m);
            printf ("De o valor de (x): ");
            scanf ("%i", &x);
            printf ("De o valor de (y): ");
            scanf ("%i", &y);
            resultado = m*x + y;
            printf ("O resultado d f(x) foi de %i", resultado);
            break;
        case 4:
            printf ("De o valor de (a): ");
            scanf ("%i", &a);
            if (a > 0)
            {
                printf ("A funcao e crescente.");
            }
            else
                if (a < 0)
                {
                    printf ("A funcao e decrescente.");
                }
            break;
        default:
            printf ("opcao invalida!");
            break;
            return 0;
    }
}
float funcaoSegundoGrau ()
{
    printf ("Qual propiedade queres saber? \n\n");
    printf ("1-PONTO DO EIXO Y\n");
    printf ("2-PONTO DE EIXO X\n");
    printf ("3-FORMULA GERAL\n");
    //printf ("4-PROPRIEDADES\n");      //ate o momento com erros
    printf (">>");
    scanf ("%i", &propiedade);
    printf ("\n");
    switch (propiedade)
    {
        case 1:
            printf ("De o valor de (a): ");
            scanf ("%i", &a);
            printf ("De o valor de (b): ");
            scanf ("%i", &b);
            printf ("De o valor de (c): ");
            scanf ("%i", &c);
            yVertice = -1*(b*b - 4*a*c)/4*a;
            printf ("O ponto do eixo Y: %f", yVertice);
            break;
        case 2:
            printf ("De o valor de (a): ");
            scanf ("%i", &a);
            printf ("De o valor de (b): ");
            scanf ("%i", &b);
            xVertice = -b/2*a;
            printf ("O valor do eixo X: %f", xVertice);
            break;
        case 3:
            printf ("De o valor de (a): ");
            scanf ("%i", &a);
            printf ("De o valor de (b): ");
            scanf ("%i", &b);
            printf ("De o valor de (c): ");
            scanf ("%i", &c);
            float delta = sqrt(pow(b, 2)-4*a*c);
            float x1 = (-b + delta)/2*a;
            float x2 = (-b - delta)/2*a;
            printf ("O valor de Delta foi de: %3.f\n", delta);
            printf ("O valor das raizes x'= %3.f e x''= %3.f ", x1, x2);
            break;
        /*case 4:
            printf ("De o valor de (a): ");
            scanf ("%i", &a);
            printf ("De o valor de (b): ");
            scanf ("%i", &b);
            printf ("De o valor de (c): ");
            scanf ("%i", &c);
            int value = a;
            float delta1 = sqrt(pow(b, 2)-4*a*c);
            if (a > 0 && delta1 < 0)
            {
                printf ("Funcao crescente e nao possue nenhum ponto tangivel ");
            }
            else if (a > 0 && delta1 = 0)
            {
                printf ("Funcao crescente e so UM ponto tangivel ");
            }
            else if (a > 0 && delta1 > 0)
            {
                float x1 = (-b + delta1)/2*a;
                float x2 = (-b - delta1)/2*a;
                printf ("Funcao crescente e de dois pontos tangiveis ");
                printf ("O valor das raizes x'= %3.f e x''= %3.f ", x1, x2);
            }
            else if(a < 0 && delta1 < 0)
            {
                printf ("Funcao decrescente e nao possue nenhum ponto tangivel ");
            }
            else if(a < 0 && delta1 = 0)
            {
                printf ("Funcao decrescente e so UM ponto tangivel ");
            }
            else if (a < 0 && delta1 > 0)
            {
                float x1 = (-b + delta1)/2*a;
                float x2 = (-b - delta1)/2*a;
                printf ("Funcao crescente e de dois pontos tangiveis ");
                printf ("O valor das raizes x'= %3.f e x''= %3.f ", x1, x2);
            }*/
            break;
        default:
            printf ("opcao invalida!");
            break;
    }
}
float funcaoExponencial ()
{
    printf ("1-FORMULA GERAL\n");
    printf ("2-PROPRIEDADES\n\n");
    printf (">>");
    scanf ("%i", &propiedade);
    printf ("\n");
    switch (propiedade)
    {
        case 1:
            printf ("De o valor de (a): ");
            scanf("%i", &a);
            printf ("De o valor de (b): ");
            scanf("%i", &b);
            printf ("De o valor de (x): ");
            scanf("%i", &x);
            x = resultado;
            resultado = pow(a, b*resultado);
            printf ("O resultado da funcao foi: %f", resultado);
            break;
        case 2:
            printf ("O VALOR DE (a) TEM QUE ESTA ENTRE 0 E 1\n\n");
            printf ("De o valor de (a): ");
            scanf("%f", &a1);
            printf ("De o valor de (b): ");
            scanf("%f", &b1);
            if (b1 < 0)
            {
                printf ("Os valores dados formam uma funcao decrescente");
            }
            else if (0 < b1)
            {
                printf ("Os valores dados formam uma funcao crescente");
            }
            break;
        default:
            printf ("opcao invalida!");
            break;
    }
    return 0;
}
/*float funcaoLogaritmica
{
    printf ("1-FORMULA GERAL\n");   //ATE O MOMENTO SÓ VAI TER ESSAS OPÇÕES PQ EU TO COM PREGUIÇA
    scanf("%i", &propiedade);
    switch (propiedade)
    {
        case 1:
            printf ("De o valor da base do log: ");
            scanf ("%i", &a);
            printf ("De o valor do logaritimando: ");
            scanf ("%i", &c);
            printf ("De o valor do logaritmo: ");
            scanf ("%i", &b);
            x = resultado;
            (pow (a, resultado)) = b;
            printf ("O resultado foi de: %f", );
            break;
        default:
            printf ("opcao invalida!");
            break;
    }
}
*/
