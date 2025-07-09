#include <stdio.h>

int main() {
    int arr[5], sum = 0, i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each to sum
    }

    printf("Sum = %d\n", sum);

    return 0;
}
// This program reads 5 integers from the user, calculates their sum, and prints the result.