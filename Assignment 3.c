#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9}; // Initialize an array of 10 elements
    int i, x, pos, n = 9; // n is the initial number of elements (9 in this case)

    // Populate the array with initial values (1 to 9)
    for (i = 0; i < n; i++)
        arr[i] = i + 1;

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Insert an element (let's say 890) at position 5 (middle)
    x = 890;
    pos = 5;
    n++; // Increase the array size
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;

    // Print the modified array after insertion
    printf("Modified array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Deleting an element from the array (let's say at position 5)
    pos = 5;
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--; // Decrease the array size

    // Print the resultant array after deletion
    printf("Resultant array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
