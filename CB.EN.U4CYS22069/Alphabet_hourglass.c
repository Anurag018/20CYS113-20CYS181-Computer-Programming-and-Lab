#include <stdio.h>

void printHourglass(int n) {
    int i, j, k;
    char ch = 'A';

        for (i = n; i >= 1; i--) {
        for (k = 0; k < i; k++)
            printf("%c", ch++);
        printf("\n");
    }

    for (i = 2; i <= n; i++) {
        for (k = 0; k < i; k++)
            printf("%c", ch++);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of rows should be greater than zero.\n");
        return 0;
    }

    printf("Alphabet Hourglass Pattern:\n");
    printHourglass(n);

    return 0;
}
