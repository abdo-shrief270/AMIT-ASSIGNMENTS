#include<stdio.h>
int *maxArr(int *a)
{
    static int max[2];
    int m=a[0];
        max[0]=a[0];
    max[1]=0;
    for(int j=1; j<5; j++)
    {
        if(m<a[j])
        {
            m=a[j];
            max[0]=a[j];
            max[1]=j;
        }
    }
    return max;

}
int *minArr(int *a)
{
    static int min[2];
    int m=a[0];
    min[0]=a[0];
    min[1]=0;
    for(int j=1; j<5; j++)
    {
        if(m>a[j])
        {
            m=a[j];
            min[0]=a[j];
            min[1]=j;
        }
    }
    return min;

}
void sort(int *arr){
int min,temp;
for(int i=0; i<4; i++)
    {
        min=i;
        for(int j=i+1; j<5; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }

        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;

    }

}


int main()
{
    int arr_1[5];

    for(int i=0; i<5; i++)
    {
        scanf("%d",arr_1+i);
    }

    sort(arr_1);

    printf("\nThe Array Elemnts After Sorting Is : \t");
    for(int i=0; i<5; i++)
    {
        printf("%d\t",arr_1[i]);
    }
    int *max=maxArr(arr_1);
    printf("\n\nThe Maximum Number is %d at index %d",max[0],max[1]);
    int *min=minArr(arr_1);
    printf("\n\nThe Minimum Number is %d at index %d\n",min[0],min[1]);
}

