#include <stdio.h>

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9}; 
    int i, x, pos, n = 9; 

    
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
   

    x = 890;
    pos = 5;
    n++; 
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;

    
    printf("\nModified array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    
    pos = 5;
    for (i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--; 
    
    printf("Resultant array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
