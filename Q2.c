#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char pass[20];
    char strongest[20] = "";
    int highest = -1000;
    int below10 = 0;

    for (int i = 0; i < 5; i++) {
        int score = 0;
        printf("Enter a password :");
        scanf("%19s",pass);
        if ( strlen(pass) >= 8) score += 5;
        if ( strstr(pass, "123") ) score -= 3;

        for (int j = 0; pass[j] != '\0'; j++) {
            if ( islower(pass[j]) ) score += 1;
            if ( isupper(pass[j]) ) score += 2;
            if ( isdigit(pass[j]) ) score += 3;
        }
        if (score > highest){
            highest = score;
            strcpy(strongest, pass);
        }
        if (score < 10) below10 += 1;
        printf("\n");
        printf("Password %s : %d\n", pass, score);
    }
    printf("Strongest password: %s (score %d)\n", strongest, highest);
    printf("Passwords scoring below 10: %d\n", below10);
    return 0;
}
