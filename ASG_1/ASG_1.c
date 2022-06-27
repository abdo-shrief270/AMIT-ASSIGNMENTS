#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x;
    bool cond;
    // if cond variable is true then number is even, if not then number is odd

    while(x!=0)
    {
        printf("\n\t--------------------\n");
        printf("\n\tEnter The Number [0 to stop] = ");
        scanf("%d",&x);
        cond= (((x/2)*2)==x)?true:false;
        printf("\n\tThe Number is odd = %d \n\tThe Number is Even= %d\n",!cond,cond);
    }
}
