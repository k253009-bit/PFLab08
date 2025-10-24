#include<stdio.h>

int main(){
    int n, p;
    int sum;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        sum =0;
        printf("%d:", i);
        for(int j=1; j<n; j++){
            p = i*j;
            printf("%4d", p);
            sum += p;
        }
        printf("\tSum: %d", sum);
        printf("\n");
    }
}