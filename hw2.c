#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    const float KM_TO_MILES = 1.609f;
    float kilometers, miles;

    printf("Please enter kilometers: ");
    scanf("%f", & kilometers);

    miles = kilometers / KM_TO_MILES;

    printf("%.1f km is equal to %.1f miles.\n", kilometers, miles);

    return 0;
}
