#include<stdio.h>

int largestNum(int x, int y, int z) {
    int arr[3];
    arr[0] = x; arr[1] = y; arr[2] = z;
    int largest = arr[0];
    for(int i=0; i<3; i++) {
        if(arr[i] > largest) largest = arr[i];
    }
    return largest;
}

int main() {
    int x,y,z;
    printf("enter 3 number");
    scanf("%d%d%d", &x, &y, &z);
    printf("largest number amongst the three nums is: %d",largestNum(x,y,z));
    return 0;

}