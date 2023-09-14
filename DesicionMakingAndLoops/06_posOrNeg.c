//6: C Program to Check Whether a Number is Positive or Negative

#include<stdio.h>

int posOrNeg(int num) {
    if(num > 0) return 1;
    else if (num < 0) return 2;
    else return 0;
}

int main() {
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if(posOrNeg(x) == 1) printf("positive");
    else if(posOrNeg(x) == 2) printf("negative");
    else printf("zero");
    return 0;

}

