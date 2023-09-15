#include<stdio.h>

int addNums(int n) {
    if(n >= 1) return n+addNums(n-1);
    else return 0;
}

int main() {
    int n;
    printf("enter num");
    scanf("%d", &n);
    printf("%d", addNums(n));
}