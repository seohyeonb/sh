#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

double calculate_standard_deviation(double arr[], int n) 
{
    double sum = 0.0, mean, variance = 0.0;

    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; i++) 
    {
        variance += pow(arr[i] - mean, 2);
    }

    return sqrt(variance / n);
}

int main() 
{
    double arr[5];
    printf("Enter 5 real numbers: ");

    for (int i = 0; i < 5; i++) 
    {
        scanf("%lf", &arr[i]);
    }

    double std_deviation = calculate_standard_deviation(arr, 5);

    printf("Standard Deviation = %.3f\n", std_deviation);

    return 0;
}
