#include <stdio.h>

void edit(int *p)
{
    *p += 1;
}

int main()
{
    int x;
    printf("\n\tEnter The Number  = ");
    scanf("%d", &x);
    printf("\n\tBefore calling Edit x = %d", x);
    edit(&x);
    printf("\n\tAfter  calling Edit x = %d", x);

    printf("\n\n\tThis part To store [5,20,80] in x : \n");
    x = 0;
    char *p = &x;
    *p = 5;
    printf("\n\t First  Value = %d", *p);
    p++;
    *p = 20;
    printf("\n\t Second Value = %d", *p);
    p++;
    *p = 80;
    printf("\n\t Third  Value = %d", *p);
}
