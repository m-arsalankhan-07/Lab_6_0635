#include <stdio.h>

int main() {

    int signal[12] = {5, 2, 3, 4, 8, 10, 1, 6, 2, 3, 16, 5};
    int sum = 0, overloaded = 0, range , highest, lowest;
    float avg = 0;

    for (int i = 0; i < 12; i++)
    {
        sum += signal[i];
    }
    avg = (float)sum / 12;
    
    for (int i = 0; i < 12; i++) {
        if(signal[i] > avg) {
            printf("\nSignal no. %d is overloaded with %d cars\n", i + 1, signal[i]);
            overloaded += 1;
        }
    }
    highest = signal[0];
    lowest = signal[0];

    for (int i = 1; i < 12; i++) {
        if (signal[i] > highest) highest = signal[i];
        if (signal[i] < lowest) lowest = signal[i];
    }
    range = highest - lowest;
    printf("\n");
    printf("Average cars waiting are : %.2f\n", avg);
    printf("Signals with overloaded cars are : %d\n", overloaded);
    printf("Highest No. of cars : %d\n",highest);
    printf("Lowest No. of cars : %d\n",lowest);
    printf("Range is : %d\n",range);

    return 0;
}