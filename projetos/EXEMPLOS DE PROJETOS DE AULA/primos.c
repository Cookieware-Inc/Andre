#include <stdio.h>
int main ()
{
    int n, j = 1, c = 0;
    printf ("Ate onde terminaram os calculos? ");
    scanf ("%i", &n);
    for (int i = 2; i <= n; ++i)
    {
        while ((j <= i)&&(c <= 2))
        {
            if ((i % j)==0)
            {
                ++c;
            }
            ++j;
        }
        if (c == 2)
        {
            printf("%i \n", i);
        }
        c = 0;
        j = 1;
    }
    return 0;
}
