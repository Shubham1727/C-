#include <stdio.h>
#include <stdlib.h>

// Function to find the smallest element
// using dynamic memory allocation
void Smallest(int* arr, int N)
{
    int a[N], i, *small;

    printf("Enter %d integer numbers\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    small = &a[0];

    for(i = 1; i < N; i++)
    {
        if( *(a + i) < *small)
            *small = *(a + i);
    }


    printf("Smallest integer is %d ", *small);
}

// Driver Code
int main()
{
    int i, N = 4;

    int* arr;

    // Memory allocation to arr
    arr = (int*)calloc(N, sizeof(int));

    // Condition for no memory
    // allocation
    if (arr == NULL) {
        printf("No memory allocated");
        exit(0);
    }

    // Store the elements
    *(arr + 0) = 14;
    *(arr + 1) = 12;
    *(arr + 2) = 19;
    *(arr + 3) = 20;

    // Function Call
    Smallest(arr, N);
    return 0;
}
