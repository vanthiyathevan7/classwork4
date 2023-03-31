#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union my_data {
    int integer;
    float floating_point;
    char string[100];
};
int main() {
    union my_data data;
    printf("Enter a value: ");
    if (scanf("%d", &data.integer) == 1) {
        printf("Value is an integer.\n");
    } else if (scanf("%f", &data.floating_point) == 1) {
        printf("Value is a floating-point number.\n");
    } else {
        char temp[100];
        scanf("%s", temp);
        strcpy(data.string, temp);
        printf("Value is a string.\n");
    }
    return 0;
}

