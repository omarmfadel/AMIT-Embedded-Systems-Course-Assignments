//7: C Program to Check Whether a Character is an Alphabet or not

#include<stdio.h>

int isAlphabet(char x) {
    if(x >= 97 && x <= 122) return 1;
    else if(x >= 65 && x <= 90) return 1;
    else return 0;
}

int main() {
    char x;
    printf("enter a number");
    scanf("%c", &x);
    if(isAlphabet(x) == 1) printf("alphabet");
    else printf("not alphabet");
    return 0;

}

