#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) 
{
    int numbers[5];
    int i;

    printf("Please input five integers: ");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    printf("Odd numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) 
        {
            printf("%d ", numbers[i]);
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");
    return 0;
}