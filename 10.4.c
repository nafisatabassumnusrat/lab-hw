#include <stdio.h>

int main() {
    int arr[5], i, max;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    /* Assume first element is the maximum at the start */
    max = arr[0];

    /* Compare each element with current max */
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum value = %d\n", max);
    return 0;
}
