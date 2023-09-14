#include<stdio.h>

int main() {
    float x, y;
    char op;
    printf("enter operator:");
    scanf("%c", &op);   
    printf("enter 2 numbers: ");
    scanf("%f%f", &x, &y);
    
    switch (op)
    {
    case '+':
        printf("%f",x+y);
        break;
    case '-':
        printf("%f",x-y);
        break;
    case '*':
        printf("%f",x*y);
        break;
    case '/':
        printf("%f",x/y);
        break;
    }
    return 0;
}