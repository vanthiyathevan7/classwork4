#include <stdio.h>
#include <math.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p1, p2;
    printf("Enter coordinates for the first point:\n");
    printf("x: ");
    scanf("%f", &p1.x);
    printf("y: ");
    scanf("%f", &p1.y);
    printf("Enter coordinates for the second point:\n");
    printf("x: ");
    scanf("%f", &p2.x);
    printf("y: ");
    scanf("%f", &p2.y);
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float distance = sqrt(dx*dx + dy*dy);
    printf("The distance between the two points is %.2f.\n", distance);

    return 0;
}

