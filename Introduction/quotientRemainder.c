#include<stdio.h>

int main() {
    int x, y, q, r;
    printf("enter first number:");
    scanf("%d", &x);
    printf("enter second number:");
    scanf("%d", &y);
    q = x/y;
    r = x%y;
    printf("quotient = %d, remainder = %d", q, r);
    return 0;
}