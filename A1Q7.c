#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num /= 10;  // Divide the number by 10 to remove the rightmost digit
        count++;    // Increment the count of digits
    }

    printf("Total digits: %d\n", count);

    return 0;
}

