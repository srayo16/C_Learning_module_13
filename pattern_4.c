#include <stdio.h>
#include <string.h>

int main()
{
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;

    int x = 1;
    int y = (n * 2) - 3;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (i > n)
            {
                break;
            }
            else
            {

                printf(" ");
            }
        }
        for (int j = 1; j <= k; j++)
        {
            if (i > n)
            {
                break;
            }
            else
            {

                printf("*");
            }
        }

        if (i <= n)
        {
            printf("\n");
            s--;
            k += 2;
        }

        if (i > n)
        {
            for (int j = 1; j <= x; j++)
            {
                printf(" ");
            }
            for (int j = 1; j <= y; j++)
            {
                printf("*");
            }

            printf("\n");
            x++;
            y = y - 2;
        }
    }

    return 0;
}