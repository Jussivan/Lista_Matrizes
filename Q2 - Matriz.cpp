#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int Resultado[2][2] = {{0, 0}, {0, 0}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                Resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    printf("Matriz A * Matriz B = \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", Resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}