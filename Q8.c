#include<stdio.h>

int main(){
    int rows = 5, cols = 5;
    char classroom[5][5];

    int sCount = 0, ecount = 0;

    for (int i=0; i<rows; i++){
        for (int j=0; j <cols; j++){
            if ((i + j) % 2 == 0){
                classroom[i][j] = 'x'; 
                sCount++;
            } else{
                classroom[i][j] = 'o'; 
                ecount++;
            }
        }
    }
    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (int i=0; i<rows; i++){
        printf("Row %d ", i + 1);
        for (int j =0; j<cols; j++){
            printf("%c ", classroom[i][j]);
        }
        printf("\n");
    }
    printf("Students seated: %d\n", sCount);
    printf("Empty desks: %d\n", ecount);
    printf("Total desks: %d\n", rows * cols);

    return 0;
}
