#include <stdio.h>

int main()
{
    int arr_1[5], size = sizeof(arr_1) / sizeof(arr_1[0]);
    printf("\nEnter 5 Array Elemnts : \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr_1 + i);
    }

    printf("\nThe Array Elemnts Before Reverse Is : \t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr_1[i]);
    }

    for (int i = 0; i < size / 2; i++)
    {
        arr_1[i] = arr_1[i] + arr_1[size - (i + 1)];
        arr_1[size - (i + 1)] = arr_1[i] - arr_1[size - (i + 1)];
        arr_1[i] = arr_1[i] - arr_1[size - (i + 1)];
    }

    printf("\nThe Array Elemnts After Reverse Is : \t");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr_1[i]);
    }
}
