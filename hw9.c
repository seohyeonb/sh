#include <stdio.h>

int main() {
    char input[100]; 
    char output[100]; 
    int i = 0;

    printf("Input> ");
    fgets(input, sizeof(input), stdin);


    while (input[i] != '\0') {
 
        if (input[i] >= 'a' && input[i] <= 'z') {
            output[i] = input[i] - ('a' - 'A');
        }

        else if (input[i] >= 'A' && input[i] <= 'Z') {
            output[i] = input[i] + ('a' - 'A');
        }

        else {
            output[i] = input[i];
        }
        i++;
    }

    output[i] = '\0';

    printf("Output> %s", output);

    return 0;
}
