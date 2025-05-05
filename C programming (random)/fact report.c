#include <stdio.h>

struct employee {
    char name[50];
    int id;
    float salary;
    float bonus;
};

int main() {
    struct employee emp;

    printf("Employee name: ");
    scanf("%s", emp.name);

    printf("Employee ID: ");
    scanf("%d", &emp.id);

    printf("Employee salary: ");
    scanf("%f", &emp.salary);

    printf("Employee bonus: ");
    scanf("%f", &emp.bonus);

    float totalCompensation = emp.salary + emp.bonus;

    printf("\nEmployee Name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Total Compensation: $%.2f\n", totalCompensation);

}
