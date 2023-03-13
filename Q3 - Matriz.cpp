#include <stdio.h>

int main() {
    double A[2][2] = {{1, 2}, {3, 4}};
    double determinante = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    if (determinante == 0) {
        printf("A matriz não é invertível.\n");
        return 0;
    }
    double adjunta[2][2] = {{A[1][1], -A[0][1]}, {-A[1][0], A[0][0]}};
    double inversa[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            inversa[i][j] = adjunta[i][j] / determinante;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%f ", inversa[i][j]);
        }
        printf("\n");
    }
    return 0;
}