#include <stdio.h>

int main() {
    int A[3] = {11, 77, 99};
    int B[4] = {33, 55, 88, 92};
    int i = 0, j = 0, k = 0;
    int C[7];
    
    // Merge the arrays
    while (i < 3 && j < 4) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements of A, if any
    while (i < 3) {
        C[k] = A[i];
        i++;
        k++;
    }
    
    // Copy remaining elements of B, if any
    while (j < 4) {
        C[k] = B[j];
        j++;
        k++;
    }
    
    // Print the resultant array
    printf("Resultant array after merging:\n");
    for (k = 0; k < 7; k++) {
        printf("%d\t", C[k]);
    }
    printf("\n");

    return 0;
}

