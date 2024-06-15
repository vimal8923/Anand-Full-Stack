#include <stdio.h>

int main()
{
    int number[10];
    int even = 0;
    int odd = 0;

    printf("Please Enter Any Number ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        if (number[j] % 2 == 0)
        {
            even = even + number[j];
        }
        else
        {
            odd = odd + number[j];
        }
    }

    printf("\nEven Number :- %d", even);
    printf("\nOdd Number :- %d", odd);

    return 0;
}