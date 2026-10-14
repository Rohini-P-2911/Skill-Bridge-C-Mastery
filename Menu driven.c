
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b, choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result = %d", add(a, b));
            break;

        case 2:
            printf("Result = %d", sub(a, b));
            break;

        case 3:
            printf("Result = %d", mul(a, b));
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f", divide(a, b));
            else
                printf("Division by zero is not possible");
            break;

        case 5:
            if (b != 0)
                printf("Result = %d", mod(a, b));
            else
                printf("Modulus by zero is not possible");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
