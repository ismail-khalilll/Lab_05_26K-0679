#include <stdio.h>

int main() {
    int card, pin;
    int balance, amount;
    printf("Card status (1=valid, 0=blocked): ");
    scanf("%d", &card);
    printf("PIN correct (1=yes, 0=no): ");
    scanf("%d", &pin);
    printf("Account balance: ");
    scanf("%d", &balance);
    printf("Withdrawal amount: ");
    scanf("%d", &amount);

    if (card == 0)
        printf("Card blocked. Contact bank.\n");
    else if (pin == 0)
        printf("Incorrect PIN.\n");
    else if (amount <= 0)
        printf("Invalid amount.\n");
    else if (amount > balance)
        printf("Insufficient balance.\n");
    else if (amount > 25000)
        printf("Daily limit exceeded.\n");
    else if ((balance - amount) < 1000)
        printf("Minimum balance must be maintained.\n");
    else {
        int rem = amount;
        int n2000 = rem / 2000;  rem = rem % 2000;
        int n500  = rem / 500;   rem = rem % 500;
        int n100  = rem / 100;   rem = rem % 100;

        printf("New balance: %d\n", balance - amount);
        printf("2000 notes: %d\n", n2000);
        printf("500 notes : %d\n", n500);
        printf("100 notes : %d\n", n100);
        if (rem > 0)
            printf("(Note: %d cannot be dispensed with these notes)\n", rem);
        printf("Please collect your cash.\n");
    }
    return 0;
}