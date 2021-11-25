// 5017: »ù´¡Ë¢Ìâ ¹Å±¤Ì½ÏÕ
// 2021.11.24
#include <stdio.h>
int main()
{
    int i, j;
    int a, b, c, d, e, f;
    int edcba;
    for (i = 10000; i < 100000; i++)
    {
        a = i / 10000 % 10;
        b = i / 1000 % 10;
        c = i / 100 % 10;
        d = i / 10 % 10;
        e = i % 10;
        edcba = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
        //printf("%d %d\n", a, edcba);
        for (j = 2; j <= 9; j++)
        {
            if (b != 0)
            {
                if (i * j == edcba)
                {
                    printf("%d\n%d\n%d\n%d\n%d\n%d\n", a, b, c, d, e, j);
                }
            }
        }
    }
    return 0;
}
