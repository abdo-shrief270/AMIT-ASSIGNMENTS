#include <stdio.h>

int main()
{
    float num_1,num_2;
    char op;
    printf("\n\t--------------------\n");
    printf("\tEnter the First Number \n\t");
    scanf("%f",&num_1);
    printf("\tEnter the Operator \n\t");
    scanf("\n%c",&op);
    printf("\tEnter the Second Number \n\t");
    scanf("%f",&num_2);

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
    case '%':
    {
        printf("\n\t\tThe Result = %d\n",((int)num_1)%((int)num_2));
        break;
    }
    default:
        printf("\n\t !!! This is Unsupported Operator !!!\n");

    }

}
