#include <stdio.h>

int main()
{
    char str[1000];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each character
    for (i = 0; str[i] != '\0'; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    // Find the first character with frequency 1
    for (i = 0; str[i] != '\0'; i++)
    {
        if (frequency[(unsigned char)str[i]] == 1)
        {
            printf("First Non-Repeating Character: %c\n", str[i]);
            return 0;
        }
    }

    // If no non-repeating character exists
    printf("-1\n");

    return 0;
}