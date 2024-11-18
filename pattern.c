#include <stdio.h>

int main() {
    int rows = 32; // Number of rows in the triangle
    int col, row;
    unsigned int pattern = 1;

    for (row = 0; row < rows; row++) {
        // Print leading spaces for alignment
        for (col = 0; col < rows - row; col++) {
            printf(" ");
        }
        // Generate the Sierpiński pattern for this row
        for (col = 0; col <= row; col++) {
            if (pattern & (1 << col)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        pattern = pattern ^ (pattern << 1); // Update the pattern
        printf("\n");
    }

    return 0;
}

