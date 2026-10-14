
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i, sum = 0;
    float avg;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid size");
        return 1;
    }

    a = (int *)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(a);
    return 0;
}
