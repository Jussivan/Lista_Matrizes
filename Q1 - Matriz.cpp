#include <stdio.h>

int main() {
    int Matriz[3][3] = {{1, 2, 3},
			{4, 5, 6},
                   	{7, 8, 9}};
    int Transposta[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Transposta[j][i] = Matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", Transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
