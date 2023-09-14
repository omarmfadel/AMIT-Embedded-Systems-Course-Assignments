//19: C Program to Generate Multiplication Table

#include<stdio.h>

void multTable(int x){
    for(int i=0; i<10; i++) 
        printf("%d x %d = %d\n", x, i+1, x*(i+1));
}

int main() {
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    multTable(x);
    return 0;
}