#include<stdio.h>
int main() {
    int i;
    float f;
    double d;
    char c;
    printf("int: %lu bytes\n", sizeof(i));
    printf("float: %lu bytes\n", sizeof(f));
    printf("double: %lu bytes\n", sizeof(d));
    printf("char: %lu bytes\n", sizeof(c));    
    return 0;
}