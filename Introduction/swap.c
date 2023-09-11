#include<stdio.h>

int main() {
    int temp, x, y;
    printf("enter 2 integers: ");
    scanf("%d%d", &x, &y);
    printf("before swap: X = %d, Y = %d\n   ", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("after swap: X = %d, Y = %d", x, y);
    return 0;
}