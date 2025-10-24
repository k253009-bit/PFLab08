#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Row %d: ", i);
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 1) {
                if (j % 2 == 1)
                    printf("x ");
                else
                    printf("o ");
            } else {
                if (j % 2 == 1)
                    printf("o ");
                else
                    printf("x ");
            }
        }
        printf("\n");
    }

    return 0;
}
