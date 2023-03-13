#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int rotacao[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            rotacao[j][1-i] = A[i][j];
        }
    }
    printf("A Matriz A rotacionada em 90° graus é : \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", rotacao[i][j]);
        }
        printf("\n");
    }
    return 0;
}