#include<stdio.h>

int evenOrOdd(int num) {
    if(num%2 == 0) return 1;
    else return 0;
}

int main() {
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if(evenOrOdd(x) == 1) printf("even");
    else printf("odd");
    return 0;

}