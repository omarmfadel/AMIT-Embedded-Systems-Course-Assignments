#include <stdio.h>

int fact(int n) {
    if (n >= 1) return n*fact(n-1);
    else return 1;
}

int main() {
    int n;
    printf("enter number to get factorial");
    scanf("%d", &n);
    printf("factorial is = %d", fact(n));
}