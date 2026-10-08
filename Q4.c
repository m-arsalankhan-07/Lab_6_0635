#include <stdio.h>

int main() {

    int count100,sum = 0;
    int marks [15] = {};
    float avg;

    for(int i = 0; i < 15; i++) {
        printf("Enter your Marks :");
        scanf("%d",&marks[i]);
        
        sum += marks[i];
        if(marks[i] > 100) marks[i] = 100;
        if(marks[i] == 100) count100 += 1;
    }
    int largest = marks[0];
    int smallest = marks[0];
    for (int i = 1; i < 15; i++) {
        if (marks[i] > largest) largest = marks[i];
        if (marks[i] < smallest) smallest = marks[i];
    }
    avg = sum / 15.0;
    int range = largest - smallest;
    printf("Range of marks is %d\n", range);
    printf("Average of class after bonus is %.2f",avg);

    return 0;
}