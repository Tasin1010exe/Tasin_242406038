#include <stdio.h>

int main() {
    int num;

    // Prompt user until a valid number is entered
             while (1) {
        printf("Enter a positive non-zero number: ");

        // Check if input is an integer
        if (scanf("%d", &num) != 1) {
            printf("Invalid input! Please enter an integer.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Check for invalid cases
        if (num == 0) {
            printf("Zero is not a valid input.\n");
            continue;
        } else if (num < 0) {
            printf("Negative input is not valid.\n");
            continue;
        }

        // Check if num is a power of 2
        if ((num & (num - 1)) == 0) {
            printf("Yes, %d is a power of 2.\n", num);
        } else {
            printf("No, %d is not a power of 2.\n", num);
        }
        break;
    }

    return 0;
}
