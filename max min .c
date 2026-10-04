#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    max = *ptr;
    min = *ptr;

    for (int i = 1; i < n; i++) {
        ptr++;

        if (*ptr > max) {
            max = *ptr;
        }

        if (*ptr < min) {
            min = *ptr;
        }
    }

    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}