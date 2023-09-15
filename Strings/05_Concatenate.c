#include<stdio.h>
#include<string.h>

int main() {
    char c1[100], c2[50];
    printf("enter first string:");
    fgets(c1, sizeof(c1), stdin);
    printf("enter second string:");
    fgets(c1, sizeof(c2), stdin);
    int strlen_c1 = strlen(c1);
    int strlen_c2 = strlen(c2);
    printf("strlen c1 %d\n", strlen_c1);
    printf("strlen c2 %d\n", strlen_c2);
    

    int new_l = strlen(c1) + strlen(c2);
    int j =0;
    
    printf("%d\n", new_l);
    for(int i=strlen(c1); i<new_l; i++) {
        c1[i] = c2[j];
        j++;
    }
    puts(c1);
    return 0;
}