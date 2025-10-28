#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; // fixed 5 rows

    // STAR PYRAMID
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)  // Spaces
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)  // Stars
            printf("*");
        printf("   |   ");
    }

    printf("\n");

    // NUMBER PYRAMID
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)  // Spaces
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)  // Numbers 1 to odd count
            printf("%d ", k);
        printf("   |   ");
    }

    printf("\n");

    // ALPHABET PYRAMID
    for (i = 1; i <= rows; i++) {
        char ch = 'A';
        for (j = 1; j <= rows - i; j++)  // Spaces
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) {  // Letters
            printf("%c ", ch);
            ch++;
        }
        printf("   |   ");
    }

    return 0;
}

