#include <stdio.h>

void swap(int x, int y)
{
    printf("\tBefore Swapping :\n\tx = %d\ty = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\tAfter Swapping :\n\tx = %d\ty = %d", x, y);
}

int main()
{
    int num_1, num_2;
    printf("\n\t--------------------\n");
    printf("\n\tEnter The First Number  = ");
    scanf("%d", &num_1);
    printf("\n\tEnter The Second Number  = ");
    scanf("\n%d", &num_2);
    swap(num_1, num_2);
}
