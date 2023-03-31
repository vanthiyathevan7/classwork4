#include <stdio.h>
struct rectangle {
    float width;
    float height;
};
int main() {
    struct rectangle rectangle;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &rectangle.width);
    printf("Enter the height of the rectangle: ");
    scanf("%f", &rectangle.height);
    float area = rectangle.width * rectangle.height;
    printf("The area of the rectangle is: %f\n", area);

    return 0;
}
