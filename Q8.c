#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int booked=0, empty=0, firstSeatAvl, lastSeatAvl, i, firstThreeAvl=0;
    int seats[15] = {1,1,0,1,0,0,1,0,1,1,0,0,0,1,0};
    bool flag1 = false, flag2 = false;
    for(i = 0 ; i < 14; i++) {
        while(flag1) {
            if (seats[i] == 0) {
                firstSeatAvl = i + 1;
                printf("First seat available is Seat Number : %d\n",firstSeatAvl);
            }
        }   
        if (seats[i] == 1) booked += 1;
        else if (seats[i] == 0) {
            empty += 1;
            lastSeatAvl = empty;    //total count of empty seats is also the last index of empty seats
            printf("Last Seat Available is Seat Number : %d\n",lastSeatAvl);
            if (firstThreeAvl <=3) {
                seats[i] = 1;
                firstSeatAvl += 1;
            }
        }
    
    }
    for (int x = 0; x < 15; x++) {
        printf("Seat Number %d : %d\n",x+1,seats[x]);
    }
    return 0;
}















/*


#include <stdio.h>

int main() {
    int seats[15] = {1,1,0,1,0,0,1,0,1,1,0,0,0,1,0};
    int booked = 0, empty = 0;
    int first = -1, last = -1;

    // Count, and find first and last available seat
    for (int i = 0; i < 15; i++) {
        if (seats[i] == 1) {
            booked++;
        } else {
            empty++;
            if (first == -1) first = i + 1;   // only set the first time
            last = i + 1;                     // keeps updating, ends on the last
        }
    }

    printf("Booked seats: %d\n", booked);
    printf("Empty seats: %d\n", empty);

    if (first == -1) {
        printf("No seats available\n");
    } else {
        printf("First available seat: %d\n", first);
        printf("Last available seat: %d\n", last);
    }

    // Book the first 3 available seats
    int count = 0;
    for (int i = 0; i < 15 && count < 3; i++) {
        if (seats[i] == 0) {
            seats[i] = 1;
            count++;
        }
    }

    // Final seating chart
    printf("\nFinal seating chart:\n");
    for (int i = 0; i < 15; i++) {
        printf("Seat %2d : %d\n", i + 1, seats[i]);
    }

    return 0;
}




*/