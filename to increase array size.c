
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *temp;
    int n, newn, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter initial elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &newn);

    if (newn < n || newn == 0) {
        printf("New size must be greater than or equal to initial size and positive");
        free(a);
        return 1;
    }

    temp = (int *)realloc(a, newn * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed");
        free(a);
        return 1;
    }

    a = temp;

    printf("Enter new elements: ");
    for (i = n; i < newn; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements: ");
    for (i = 0; i < newn; i++) {
        printf("%d ", a[i]);
    }

    free(a);
    return 0;
}
