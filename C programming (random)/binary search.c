#include <stdio.h>

int bsearch(int array[], int search, int size) {
    int mid, l, r;
    l = 0;
    r = size - 1;

    while (l <= r) {
        mid = (l + r) / 2;

        if (search == array[mid]) {
            return 1;
        } else if (search > array[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return 0;
}

int main() {
    printf("Enter array size: ");
    int size;
    scanf("%d", &size);
    int array[size];

    printf("Enter data in array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    int search;
    scanf("%d", &search);

    int result = bsearch(array, search, size);
    if (result == 1) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }

    return 0;
}
