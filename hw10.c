#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    char name[50];
    char country[50];
    int population;
} City;

int main() {
    City cities[3]; 
    int i;

    printf("Input three cities:\n");

    for (i = 0; i < 3; i++) {
        printf("Name> ");
        scanf("%s", cities[i].name);

        printf("Country> ");
        scanf("%s", cities[i].country);

        printf("Population> ");
        scanf("%d", &cities[i].population);
    }

    printf("\nPrinting the three cities:\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
