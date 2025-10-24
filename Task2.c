#include<stdio.h>

int main(){
    int m,n = 0;
    int arr[3][4] = {
        {10,22,35,41},
        {50,65,73,90},
        {91,10,11,12},
    };
    int max = 0; 

    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            printf("%3d", arr[i][j]);
            if (arr[i][j]>max){
                max = arr[i][j];
                m = i;
                n = j;
            }
        }
        printf("\n");
    }
    printf("Maximum number in array is %d at arr[%d][%d]", max, m, n);
    return 0;
}