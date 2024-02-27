#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr[5];
    int i, sum = 0;

    for(i=0; i<5; i++) {
        ptr[i] = &arr[i];
        sum += *ptr[i];
    }

    printf("Sum of elements: %d", sum);

    return 0;
}
