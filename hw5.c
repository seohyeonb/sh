#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void decimal_to_binary(int n) 
{
    if (n > 1) 
    {
        decimal_to_binary(n / 2);
    }
    printf("%d", n % 2);
}

int main(void) 
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    decimal_to_binary(number);
    printf("\n");

    return 0;
}
