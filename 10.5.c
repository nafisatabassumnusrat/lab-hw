#include <stdio.h>

int main() {
    int arr[5], i, min;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is the minimum
    min = arr[0];

    // Find the minimum
    for(i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Display result
    printf("Minimum value = %d\n", min);

    return 0;
}
