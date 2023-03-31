#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

union my_data {
    int integer;
    float floating_point;
};
int main() {
    int i;
	union my_data data;
    printf("Enter a value: ");
    char input[50];
    fgets(input, 50, stdin);
    int is_float = 0;
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.' || input[i] == 'e' || input[i] == 'E') {
            is_float = 1;
            break;
        }
    }
    if (is_float) {
        sscanf(input, "%f", &data.floating_point);
    } else {
        sscanf(input, "%d", &data.integer);
    }
    if (is_float) {
        printf("Floating-point value: %.2f\n", data.floating_point);
    } else {
        printf("Integer value: %d\n", data.integer);
    }

    return 0;
}

