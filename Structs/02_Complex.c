#include<stdio.h>

struct complex {
    float real;
    float imaginary;
};

int main() {
    struct complex c1={0>0,0.0}, c2={0.0,0.0};
    printf("enter complex num1:\n Enter real part:");
    scanf("%f", &c1.real);
    printf("c1.real = \n", c1.real);
    printf("Enter imaginary part:");
    scanf("%f", &c1.imaginary);
    printf("c1.img = \n", c1.imaginary);

    printf("enter complex num2:\n Enter real part:");
    scanf("%f", &c2.real);
    printf("c2.real = \n", c2.real);
    printf("Enter imaginary part:");
    scanf("%f", &c2.imaginary);
    printf("c2.img = \n", c2.imaginary);
    
    printf("sum = %d + %di", (float)c1.real+c2.real, c1.imaginary+c2.imaginary);
    return 0;

}