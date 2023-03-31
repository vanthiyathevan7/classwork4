#include <stdio.h>

struct employee {
    char name[100];
    float salary;
    int age;
};

int main() {
    struct employee employees[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter information for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Age: ");
        scanf("%d", &employees[i].age);
    }
    for (int i = 0; i < 3; i++) {
        printf("\nInformation for employee %d:\n", i + 1);

        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}

