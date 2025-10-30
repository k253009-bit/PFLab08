#include<stdio.h>

int main(){
    int seats[3][3] = {
        {1,0,1},
        {0,0,1},
        {1,1,0}
    };
    int available = 0;

    printf("Available Seats:\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (seats[i][j] == 0) {
                available++;
                printf("Row %d, Seat %d\n", i+1, j+1);
            }
        }
    }
    printf("\nTotal Available Seats: %d\n", available);

    return 0;
}
