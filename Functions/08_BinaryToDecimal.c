#include<stdio.h>
#include<math.h>

int binToDec(int n) {
    int r, returnVal=0, i=0;
    while(n != 0) {
        r = n%10;
        n = n/10;
        returnVal = returnVal + r*pow(2,i);
        i++;
    }
    return returnVal;
}

int decToBin(int n) {
    int r, i = 1, returnVal=0;

    while (n != 0) {
        r = n % 2;
        n=n/2;
        returnVal = returnVal + r*i;
        i = i*10;
    }

    return returnVal;
}

int main() {
    int choice=3, n; //initialization choice not equal to zero
    printf("Enter 1 for binary to decimal. 2 for decimal to binary:");
    
    while(choice !=0) {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter a binary number");
            scanf("%d", &n);
            printf("%d", binToDec(n));
            break;
        case 2:
            printf("enter a decimal number");
            scanf("%d", &n);
            printf("%d", decToBin(n));
            break;
        default:
            printf("enter a valid choice");
        }
    }
}