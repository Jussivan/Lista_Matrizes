#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int identidade[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            identidade[i][j] = 0;
            if (i == j) {
                identidade[i][j] = 1;
            }
        }
    }
    printf("A Identidade da Matriz A é : \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", identidade[i][j]);
        }
        printf("\n");
    }
    return 0;
}