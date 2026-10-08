#include <stdio.h>

int main() {

    int number, rev = 0, rem;
    printf("Enter a number :");
    scanf("%d",&number);

    int orignal = number;
    while (number != 0) {
    rem = number % 10;
    rev = (rev * 10) + rem;
    number /= 10;
    }
    if (orignal == rev) printf("It is a palindrome\n");
    else printf("It is not a palindrome\n");
    return 0;
}