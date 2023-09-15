#include<stdio.h>
#include<string.h>
#define MAX 100

int main() {
    char c1[MAX], c2[MAX], i=0;
    printf("enter string:");
    fgets(c1, sizeof(c1), stdin);
    for(i=0; i<strlen(c1); i++)
        c2[i] = c1[i];
    // add null char at the end
    c2[i] = '\0';
    printf("%d and %d", strlen(c1), strlen(c2));
    puts(c2);
    
    return 0;

}