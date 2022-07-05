#include <stdio.h>

void fseries(int t, int n1, int n2,int n12)
{
    if (t == 0)
    {
        return;
    }
    printf("%d ", n12);
    t--;
    return fseries(t, n2, n12,n2+n12);
}

int main()
{
    int num;
    printf("\n\tEnter The Number of Terms  = ");
    scanf("%d", &num);
    printf("\tFibonacci Series : 0 1 ");
    fseries(num-2, 0, 1,1);
}
