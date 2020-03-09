#include <stdio.h>
int gVariavelGlobal = 2;
int main ()
{
    void test ();
    printf ("Variavel Global = %i \n", gVariavelGlobal);
    test ();
    test ();
    test ();

    return 0;
}
void test ()
{
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;
    gVariavelGlobal *= 2;
    printf ("Variavel Local Automatica = %i \n", variavelLocalAutomatica);
    printf ("Variavel Local Estatica = %i \n", variavelLocalEstatica);
    printf ("Variavel Global = %i \n", gVariavelGlobal);
}
