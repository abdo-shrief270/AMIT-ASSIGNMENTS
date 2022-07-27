#include <stdio.h>
typedef struct
{
    int real;
    int imag;

} comp;

int main()
{
    comp comp1;
    comp comp2;
    comp sum;
    printf("For 1st complex number\nEnter The real and imaginary part respectively :\n");
    scanf("%d", &comp1.real);
    scanf("%d", &comp1.imag);
    printf("\nFor 2nd complex number\nEnter The real and imaginary part respectively :\n");
    scanf("%d", &comp2.real);
    scanf("%d", &comp2.imag);
    sum.real = comp1.real + comp2.real;
    sum.imag = comp1.imag + comp2.imag;
    printf("\nSum = %d + %di\n", sum.real, sum.imag);
}
