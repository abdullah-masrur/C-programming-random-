#include <stdio.h>

int main() {
  int a[10];
  int i, sum = 0;

  for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < 10; i++) {
    sum += a[i];
  }

  printf("Sum of all elements: %d\n", sum);

  return 0;
}

