#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int product = 1;
    int temp = N;

    // Calculate the product of individual digits
    while (temp > 0) {
        int digit = temp % 10;
        product *= digit;
        temp /= 10;
    }

    // Check if the product is divisible by all positive factors of 33 (except 1)
    int is_valid = 1;
    for (int i = 2; i <= 33; i++) {
        if (33 % i == 0 && product % i != 0) {
            is_valid = 0;
            break;
        }
    }

    if (is_valid) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

