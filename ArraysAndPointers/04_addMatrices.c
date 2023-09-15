#include <stdio.h>
#define MAX 5

int main() {
    int r, c, a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    printf("enter num of rows [Should be less than %d]:", MAX);
    scanf("%d", &r);
    printf("enter num of columns [Should be less than %d]:", MAX);
    scanf("%d", &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
        printf("Enter element B[%d][%d]: ", i, j);
        scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum: ");
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++) {
        printf("%d   ", sum[i][j]);
        if (j == c - 1) {
        printf("\n\n");
        }
    }

    return 0;
}