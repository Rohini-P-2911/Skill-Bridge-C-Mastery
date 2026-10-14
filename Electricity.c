
#include <stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0)
        printf("Invalid units");
    else if (units <= 100)
        bill = units * 1.50;
    else if (units <= 200)
        bill = 100 * 1.50 + (units - 100) * 2.50;
    else
        bill = 100 * 1.50 + 100 * 2.50
               + (units - 200) * 4.00;

    if (units >= 0)
        printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}
