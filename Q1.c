#include<stdio.h>

int main(){
    float total, avg;
    float arr[3][4] = {
        {85, 92, 78, 90},  
        {88, 76, 95, 84},  
        {90, 85, 88, 92},  
    };

    for(int i=0; i<=2; i++){
        total = 0;
        for(int j=0; j<=3; j++){
            total += arr[i][j];
        }
        avg = total/4.0;
        printf("Average of Class %d: %0.2f\n", i, avg);
    }
    
    return 0;
}