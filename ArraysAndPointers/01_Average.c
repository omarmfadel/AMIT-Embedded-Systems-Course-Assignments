#include<stdio.h>
#define MAX 5


int main() {
    int arr[MAX], n=0, sum=0, i;
    printf("enter num of elements [Should be less than %d]:", MAX);
    do {
        scanf("%d", &n);
    } while(n<=0 || n> MAX);
    for(i=0; i<n; i++) {
        printf("enter element %d:", i+1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum of numbers = %d", sum);
    float avg = (float)sum/n;
    printf("average of numbers = %f", avg);
    return 0;
}