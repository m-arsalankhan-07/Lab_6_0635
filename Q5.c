#include <stdio.h>

int main () {

    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};
    int sum100=0, sum200=0, sum500=0, total = 0, withdraw;

    for (int i = 0 ; i < 5; i++) {
        sum100 += notes100[i] * 100;
        sum200 += notes200[i] * 200;
        sum500 += notes500[i] * 500;
    }
    total = sum100 + sum200 + sum500;
    printf("Enter amount to withdraw :");
    scanf("%d",&withdraw);

    if (withdraw % 100 != 0 || withdraw <= 0) {
        printf("Invalid Amount\n");
        return 0;
    }
    if(withdraw > total) {
        printf("Insufficient Funds\n");
        return 0;
    }
   
    else printf("Transaction Approved\n");
}       