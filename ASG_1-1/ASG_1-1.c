#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x=1,bx,hx,i,dOfH,b;
    char h[16];
    //x is the decimal number.
    //i is the increment variable.
    //b is the binary number.
    //h is the array of hexDecimal characters.
    while(x!=0)
    {
        i=0;
        b=0;
        x=1;
        printf("\n\t--------------------\n");
        printf("\n\tEnter The decimal Number [0 to stop] = ");
        scanf("%d",&x);
        if(x==0){
        printf("\n\tThanks :) \n");
            break;
        }
        // this part to get a copy of the number to convert it in two ways
        bx=x;
        hx=x;
        while(bx!=0)
        {
            b+=(bx%2)*pow(10,i);
            bx/=2;
            i++;
        }
        printf("\tThe Binary number is : %d\n\t",b);

        // this part for hexDecimal converter
        i=0;
        while(hx!=0)
        {
            dOfH=hx%16;
            if(dOfH<10)
            {
                // I added 48 to convert from int to char
                h[i]=48+dOfH;
            }
            else
            {

                switch(dOfH)
                {
                case 10:
                {
                    h[i]='A';
                    break;
                }
                case 11:
                {
                    h[i]='B';
                    break;
                }
                case 12:
                {
                    h[i]='C';
                    break;
                }
                case 13:
                {
                    h[i]='D';
                    break;
                }
                case 14:
                {
                    h[i]='E';
                    break;
                }
                case 15:
                {
                    h[i]='F';
                }
                };
            }
            hx/=16;
            i++;
        }
        // This part to output hexDecimal number
        printf("The Hexdecimal number is :  ");
        for(int j=sizeof(h); j>=0; j--)
        {
            // to prevent empty characters
            if(h[j]==NULL)
                continue;

            printf("%c",h[j]);
        }
        printf("\n\t--------------------\n");
    }

}
