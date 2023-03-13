#include <stdio.h>

int main() {
    int A[2][2] = {{2, 3}, {1, 4}};
    int determinante = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    printf("A Determinante da Matriz é : %d", determinante);
    return 0;
}