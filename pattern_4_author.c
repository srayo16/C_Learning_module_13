#include <stdio.h>
#include <string.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        printf("\n");
        if (i > n - 1)
        {
            s++;
            k = k - 2;
        }
        else if (i <= n - 1)
        {
            s--;
            k += 2;
        }
    }

    return 0;
}