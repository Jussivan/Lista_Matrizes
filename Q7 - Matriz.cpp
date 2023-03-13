#include <stdio.h>

int main() {
    int A[3][3] = {{2, 0, 1}, {3, 4, -2}, {8, 9, 6}};
    int diagonal[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            diagonal[i][j] = 0;
            if (i == j) {
                diagonal[i][j] = A[i][j];
            }
        }
    }
    printf("A Diagonal da Matriz A é : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", diagonal[i][j]);
        }
        printf("\n");
    }
    return 0;
}