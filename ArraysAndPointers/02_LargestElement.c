#include<stdio.h>
#define MAX 5


int main() {
    int arr[MAX], n=0, i, largest;
    printf("enter num of elements [Should be less than %d]:", MAX);
    do {
        scanf("%d", &n);
    } while(n<=0 || n> MAX);
    for(i=0; i<n; i++) {
        printf("enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i=0; i<n; i++)
        if(arr[i] > largest) largest = arr[i];
    printf("largest is %d", largest);
    return 0;
}