#include <stdio.h>

int main() {
    int A[2][2] = {{2, 3}, {1, 4}};
    int cofatora[2][2];
    cofatora[0][0] = A[1][1];
    cofatora[0][1] = -1 * A[1][0];
    cofatora[1][0] = -1 * A[0][1];
    cofatora[1][1] = A[0][0];
    printf("A cofatora da Matriz A é : \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", cofatora[i][j]);
        }
        printf("\n");
    }
    return 0;
}