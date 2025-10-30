#include<stdio.h>

int main(){
    int arr[4][4]={
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };

    int inverted[4][4];
    int count = 0;

    printf("Original image:\n");

    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", arr[i][j]);
            if (arr[i][j] == 1)
                count ++;
        }
        printf("\n");
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            inverted[i][j]=(arr[i][j] == 1) ? 0 : 1;
        }
    }

    printf("\nInverted image:\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d ", inverted[i][j]);
        } printf("\n");
    }
    printf("\nTotal White Pixels in original image: %d\n", count );

    return 0;
}

