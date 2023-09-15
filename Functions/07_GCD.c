#include<stdio.h>

int GCD(int x, int y) {
    if(y != 0) return GCD(y, x%y);
    else return x;
}

int main() {
    int x,y;
    printf("enter 2 nums:");
    scanf("%d%d", &x, &y);
    printf("%d", GCD(x,y));
}