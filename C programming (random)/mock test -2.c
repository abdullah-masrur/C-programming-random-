#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // Calculate X^Y manually
    int result = 1;
    for(int i = 0; i < Y; i++) {
        result *= X;
    }
printf("%d\n",result);
    // Check if the result is even or odd
    if (result % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
