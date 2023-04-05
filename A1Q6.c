
#include <stdio.h>

int main() {
    int amount, notes;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    notes = amount / 500;
    printf("Rs. 500 notes: %d\n", notes);
    amount = amount % 500;

    notes = amount / 100;
    printf("Rs. 100 notes: %d\n", notes);
    amount = amount % 100;

    notes = amount / 50;
    printf("Rs. 50 notes: %d\n", notes);
    amount = amount % 50;

    notes = amount / 20;
    printf("Rs. 20 notes: %d\n", notes);
    amount = amount % 20;

    notes = amount / 10;
    printf("Rs. 10 notes: %d\n", notes);
    amount = amount % 10;

    notes = amount / 5;
    printf("Rs. 5 notes: %d\n", notes);
    amount = amount % 5;

    notes = amount / 2;
    printf("Rs. 2 notes: %d\n", notes);
    amount = amount % 2;

    notes = amount / 1;
    printf("Rs. 1 notes: %d\n", notes);

    return 0;
}
