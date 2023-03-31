#include <stdio.h>

union my_union {
    int integer;
    float floating_point;
};

int main() {
    union my_union unions[5];
    float total = 0;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter a value for union %d:\n", i+1);
        printf("(1) Integer: ");
        scanf("%d", &unions[i].integer);
        printf("(2) Floating point: ");
        scanf("%f", &unions[i].floating_point);
        if (i % 2 == 0) {
            total += (float)unions[i].integer;
        } else {
            total += unions[i].floating_point;
        }
    }
    printf("The total of all the values is %.2f.\n", total);

    return 0;
}

