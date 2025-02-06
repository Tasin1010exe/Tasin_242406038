#include <stdio.h>

int isPowerOfTwo(int num) {
    return (num > 0) && ((num & (num - 1)) == 0);
}

int main() {
    int num;
    // Prompt user for input
    {
        printf("Enter a positive nonzero number: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Invalid input! Please enter a positive nonzero number.\n");
        }
    }
     (num <= 0);
    // Ensure valid input
    // Check if the number is a power of 2
    if (isPowerOfTwo(num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
        return 0;
}
