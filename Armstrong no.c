
#include <stdio.h>

int main()
{
    int limit, n, temp, digit, count;
    int sum, i, power;

    printf("Enter limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers are: ");

    for (n = 1; n <= limit; n++)
    {
        temp = n;
        count = 0;

        while (temp > 0)
        {
            count++;
            temp /= 10;
        }

        temp = n;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            power = 1;

            for (i = 1; i <= count; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}
