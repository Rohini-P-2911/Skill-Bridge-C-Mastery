#include <stdio.h>

int main() {
    char str[1000];
    int seen[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (seen[ch] == 0) {
            printf("%c", str[i]);
            seen[ch] = 1;
        }
    }

    return 0;
}