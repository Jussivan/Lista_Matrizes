#include <stdio.h>

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int adjunta[3][3];
    adjunta[0][0] = A[1][1] * A[2][2] - A[1][2] * A[2][1];
    adjunta[0][1] = -1 * (A[1][0] * A[2][2] - A[1][2] * A[2][0]);
    adjunta[0][2] = A[1][0] * A[2][1] - A[1][1] * A[2][0];
    adjunta[1][0] = -1 * (A[0][1] * A[2][2] - A[0][2] * A[2][1]);
    adjunta[1][1] = A[0][0] * A[2][2] - A[0][2] * A[2][0];
    adjunta[1][2] = -1 * (A[0][0] * A[2][1] - A[0][1] * A[2][0]);
    adjunta[2][0] = A[0][1] * A[1][2] - A[0][2] * A[1][1];
    adjunta[2][1] = -1 * (A[0][0] * A[1][2] - A[0][2] * A[1][0]);
    adjunta[2][2] = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    printf("A Adjunta da Matriz A é : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", adjunta[i][j]);
        }
        printf("\n");
    }
    return 0;
}