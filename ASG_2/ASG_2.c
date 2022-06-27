#include <stdio.h>

int main()
{
    float num_1,num_2;
    char op;
    printf("\n\t--------------------\n");
    printf("\tEnter the Equation [like 1+1] : \n\t\t");
    scanf("%f%c%f",&num_1,&op,&num_2);
    switch(op)
    {
    case '+':
    {
        printf("\n\t\tThe Result = %.2f\n",num_1+num_2);
        break;
    }
    case '-':
    {
        printf("\n\t\tThe Result = %.2f\n",num_1-num_2);
        break;
    }
    case '*':
    {
        printf("\n\t\tThe Result = %.2f\n",num_1*num_2);
        break;
    }
    case '/':
    {
        printf("\n\t\tThe Result = %.2f\n",num_1/num_2);
        break;
    }
    default:
        printf("\n\t !!! This is Unsupported Operator !!!\n");

    }

}
