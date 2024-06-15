#include <stdio.h>

int Add(int x, int y);
int Subtract(int x, int y);
int Multiply(int x, int y);
int Divide(int x, int y);

int main()
{
    int firstNumber, secondNumber;
    int TaskNumber;
    int result = 0;

    printf("\nPress 1 for Addition");
    printf("\nPress 2 for Subtraction");
    printf("\nPress 3 for for Multiply");
    printf("\nPress 4 for divide");

    printf("\n\nPlease Enter Any Two Number ");
    scanf("%d %d", &firstNumber, &secondNumber);

    printf("\nPlease Enter Task Number ");
    scanf("%d", &TaskNumber);

    if (TaskNumber == 1)
    {
        result = Add(firstNumber, secondNumber);
        printf("Sum is :- %d", result);
    }
    else if (TaskNumber == 2)
    {
        result = Subtract(firstNumber, secondNumber);
        printf("Subtract is :- %d", result);
    }
    else if (TaskNumber == 3)
    {
        result = Multiply(firstNumber, secondNumber);
        printf("Multiply is :- %d", result);
    }
    else if (TaskNumber == 4)
    {
        result = Divide(firstNumber, secondNumber);
        printf("Divide is :- %d", result);
    }
    else
    {
        printf("Error : Wrong Enter TaskNumber");
    }

    return 0;
}

int Add(int x, int y)
{
    return x + y;
}
int Subtract(int x, int y)
{
    return x - y;
}
int Multiply(int x, int y)
{
    return x * y;
}
int Divide(int x, int y)
{
    return x / y;
}