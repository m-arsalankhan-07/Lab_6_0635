#include <stdio.h>

int main() {

    float avg;
    int i = 0, countFlag = 0, sum = 0, largestIndex;
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};

    for (i = 0; i < 10; i++) {
        if (transfers[i] >= 100 && transfers[i] <= 200000) {
            sum += transfers[i];
        }
        else if (transfers[i] < 100) {
            countFlag += 1;
            printf("Transfer no. %d is Flagged (Below 100)\n",i+1);
        }
            
        else if(transfers[i] > 200000) {
            countFlag += 1;
            printf("Transfer no. %d is Flagged (Above 200,000)\n",i+1);
        }
    }

    int normalTransfer = 10 - countFlag;
    if (normalTransfer > 0)
    avg = (float)sum / normalTransfer;
    else
    avg = 0;
    
    int largest = transfers[0];
    for (int x = 1; x < 10 ; x++) {
        if(transfers[x] > largest) {
        largest = transfers[x];
        largestIndex = x;
        }
    }
    printf("\n");
    printf("Total Flagged Transfers are : %d\n", countFlag);
    printf("Average of Normal Transfers : %.2f\n",avg);
    printf("Largest tranfer amount is no. %d : %d\n",largestIndex + 1, largest);
    return 0;
}