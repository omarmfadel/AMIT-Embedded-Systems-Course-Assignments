#include<stdio.h>
#include<math.h>
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
        sum += arr[i]*arr[i];
    }
    printf("sum of numbers = %d\n", sum);
    float avg = (float)sum/n;
    printf("average of numbers = %f\n", avg);
    float stdDev = sqrt(avg);
    printf("std deviation of numbers = %f", stdDev);
    return 0;
}