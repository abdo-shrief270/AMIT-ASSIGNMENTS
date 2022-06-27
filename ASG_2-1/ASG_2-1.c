#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int x,px,y,sum,countOfx;
    bool cond;
    //x is the decimal number.
    //px,y is a temporary copy of x.
    //sum is the sum of the digits.
    //cond is a boolean condition variable.
    while(1)
    {
        printf("\n\t--------------------\n");
        printf("\n\tEnter The decimal Number [0 to stop] = ");
        scanf("%d",&x);
        if(x==0)
        {
            printf("\n\tThanks :) \n");
            break;
        }

        px=x;
        y=x;
        sum=0;
        countOfx=0;
        
        for(; px!=0; px/=10)
        {
            countOfx++;

        }

        for(; y!=0; y/=10)
        {
            sum+=pow(y%10,countOfx);

        }
        cond=(x==sum);
        switch(cond)
        {

            case true:
                {
                    printf("\n\t%d is an Armstrong Number",x);
                    break;
                }

            default:
                {
                    printf("\n\t%d is't an Armstrong Number\n",x);
                }

        }

        printf("\n\t--------------------\n");
    }

}