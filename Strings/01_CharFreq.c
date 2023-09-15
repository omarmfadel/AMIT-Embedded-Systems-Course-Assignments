#include<stdio.h>
#include<string.h>
#define MAX 100

int main() {
    char c[MAX], query;
    int f=0;
    printf("enter string:");
    fgets(c, sizeof(c), stdin);
    printf("enter a char to get its frequency:");
    scanf("%c", &query);
    
    for(int i=0; i<strlen(c); i++) {
        if(c[i]==query) f++;
    }
    printf("frequency of %c = %d", query, f);
    return 0;

}