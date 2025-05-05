#include<stdio.h>
#define pi 3.14159
void Cylinder();
void Parallelogram();
void Rombus();
void Trapezium();
void Circle();
void Square();
void Rectangle();
void Triangle();
int main(){
    int select;
    do{
        printf("Select from Menu : \n1. Triangle\n2. Rectangle\n3. Square\n4. Circle\n5. Trapezoid / Trapezium\n6. Rhombus\n7. Parallelogram\n8. Cylinder (Surface area)\n9. Exit\n");
        scanf("%d",&select );
        switch(select){
            case 1:
            Triangle();
            break;
            case 2:
            Rectangle();
            break;
            case 3:
            Square();
            break;
            case 4:
            Circle();
            break;
            case 5:
            Trapezium();
            break;
            case 6:
            Rombus();
            break;
            case 7:
            Parallelogram();
            break;
            case 8:
            Cylinder();
            break;
            case 9:
            printf("Thank you!\n");
            break;
            default:
            printf("Invalid command! Please select again.....\n");
        }
    } while(select!=9);

    return 0;
}

void Triangle() {
    double base, height, area;
        printf("Base = ");
        scanf("%lf",&base);
        printf("Height = ");
        scanf("%lf",&height);
        area = (1.0/2) * base * height;
        printf("Triangle's Area = %.2lf\n\n",area);
}
void Rectangle() {
    double length,width,area;
        printf("Length = ");
        scanf("%lf",&length);
        printf("Width = ");
        scanf("%lf",&width);
        area = length * width;
        printf("Rectangle's Area = %.2lf\n\n",area);
}
void Square() {
    double side,area;
        printf("Side = ");
        scanf("%lf",&side);
        area = side*side;
        printf("Square's Area = %.2lf\n\n",area);
}
void Circle() {
    double radius,area;
        printf("Radius = ");
        scanf("%lf",&radius);
        area = pi * radius * radius;
        printf("Circle's Area = %.2lf\n\n",area);
}
void Trapezium() {
    double base1,base2,height,area;
        printf("Base 1 = ");
        scanf("%lf",&base1);
        printf("Base 2 = ");
        scanf("%lf",&base2);
        printf("Height = ");
        scanf("%lf",&height);
        area = (1.0/2) * (base1 + base2) * height;
        printf("Trapezium's Area = %.2lf\n\n",area);
}
void Rombus() {
    double dia1,dia2,area;
        printf("Diagonal 1 = ");
        scanf("%lf",&dia1);
        printf("Diagonal 2 = ");
        scanf("%lf",&dia2);
        area = (1.0/2) *dia1 * dia2;
        printf("Rombus's Area = %.2lf\n\n",area);
}
void Parallelogram() {
    double base,height,area;
        printf("Base = ");
        scanf("%lf",&base);
        printf("Height = ");
        scanf("%lf",&height);
        area = base * height;
        printf("Parallelogram's Area = %.2lf\n",area);
}
void Cylinder() {
    double radius,height,area;
        printf("Radius = ");
        scanf("%lf",&radius);
        printf("Height = ");
        scanf("%lf",&height);
        area = (2*pi*radius) * (height + radius);
        printf("Cylinder's Area = %.2lf\n",area);
}
