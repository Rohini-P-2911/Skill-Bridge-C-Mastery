#include <stdio.h>

int main() {
    int n = 5;
    int i, j, space;
    int value;

    for (i = 0; i < n; i++) {

        for (space = 0; space < n - i - 1; space++)
            printf("   ");

        value = 1;

        for (j = 0; j <= i; j++) {
            printf("%d   ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}