#include <stdio.h>

int main() {
    int arr[5], i;
    int sum = 0;
    float average;

    // Read 5 numbers
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate average
    average = sum / 5.0;

    // Display average
    printf("Average = %.2f\n", average);

    return 0;
}
