#include <stdio.h>
#include <string.h>

int main()
{
    int n, x;
    printf("Enter the array number: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("Enter the sum number: ");
    // scanf("%d", &x);
    int k = 0;
    int flag = 0;
    for (int l = 0; l < n; l++)
    {
        for (int i = k + 1; i < n; i++)
        {
            if (arr[k] < arr[i])
            {
                // printf("These two are: %d + %d = %d\n", arr[k], arr[i], x);
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
            // else
            // {

            //     continue;
            // }
        }
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}