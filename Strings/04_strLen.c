#include<stdio.h>
#define MAX 100

int main() {
    char c[MAX];
    int strlen=0, i=0;
    printf("enter string:");
    fgets(c, sizeof(c), stdin);
    
    while(c[i] !='\0') {
        strlen++;
        i++;
    }
    printf("length is = %d", strlen);
    return 0;

}