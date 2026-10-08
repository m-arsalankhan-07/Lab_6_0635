#include <stdio.h>

int main() {

    int generation[10] = {1,1};
    int indexStart = 0 , indexEnd = 1;

    for(int i = 2; i < 10; i++) {
        generation[i] = generation[indexStart] + generation[indexEnd];
        indexStart += 1;
        indexEnd += 1;
    }

    for (int i = 0; i < 10; i++) {
        printf("Result of generation %d : %d\n" ,i , generation[i]);
    }
    return 0;
}