#include <stdio.h>

int main() {

    int amount, transactions = 0, total = 0;
    printf("Enter Withdrawal amount :");
    scanf("%d",&amount);

    while (amount != 0) {
        printf("Processing your Amount....\n");
        printf("Your amount is Withdrawn\n");
        transactions += 1;
        total += amount;
        printf("\nEnter Withdrawal Amount : ");
        scanf("%d",&amount);
    }
    printf("\n");
    printf("Session Ended\n");
    printf("\n");
    printf("---SUMMARY---\n");
    printf("Total transactions made : %d\n", transactions);
    printf("Total amount withdrawn : %d",total);
    return 0;
}