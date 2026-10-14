
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, i, max, min;

    printf("Enter n: ");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    free(a);
    return 0;
}
