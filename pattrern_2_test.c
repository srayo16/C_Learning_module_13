#include <stdio.h>
#include <string.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = 0;
    k = (n * 2) - 1;

    for (int i = 1; i <= n; i++)
    {
        // if (s > 1)
        // {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        // }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");
        s++;
        k = k - 2;
    }

    return 0;
}