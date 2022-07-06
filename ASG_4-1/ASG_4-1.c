#include <stdio.h>
#include <string.h>

void reverse(char *ptr)
{
    int start, end, len;
    len = strlen(ptr);
    end = len - 1;
    start = 0;
    printf("\n\tThis part to reverse Order Of words : \n\t-------------------------------------\n\n\t");

    for (int i = len - 1; i >= 0; i--)
    {
        if (ptr[i] == ' ' || i == 0)
        {
            if (i == 0)
                start = 0;
            if (ptr[i] == ' ')
                start = i + 1;

            for (int k = start; k <= end; k++)
                printf("%c", ptr[k]);

            end = i - 1;
            printf(" ");
        }
    }
}

void reverseWord(char *ptr)
{
    char word[100];
    int count, start, end, len, len2, startPrint = 999999999;
    len = strlen(ptr);
    printf("\n\n\tThis part to reverse Specific word : \n\t------------------------------------\n");
    printf("\n\tEnter the Word : ");
    scanf("%[^\n]%*c", word);
    len2 = strlen(word);
    for (int i = 0; i <= len - 1; i++)
    {
        if (ptr[i] == word[0])
        {
            count = 0;

            for (int j = 0; j < len2; j++)
            {
                if (ptr[i + j] == word[j])
                {
                    count++;
                }
                else
                {
                    count = 0;
                    break;
                }
            }
            if (count == len2)
            {
                startPrint = i;
                start = i;
                end = i + len2 - 1;
                char temp;
                while (start < end)
                {
                    temp = ptr[start];
                    ptr[start] = ptr[end];
                    ptr[end] = temp;
                    start++;
                    end--;
                }
            }
        }
    }
    printf("\n\tThe output :\n\t------------\n\n\t%s\n", ptr);
    if (len >= startPrint)
    {
        printf("\t");
        for (int i = 0; i < startPrint; i++)
        {
            printf(" ");
        }
        while (len2 > 0)
        {
            printf("*");
            len2--;
        }
        printf("\n");
    }
}

int main()
{
    int count, start, end, len, len2, startPrint = 999999999;
    char *str[100];
    printf("\n\tEnter The String  = ");
    scanf("%[^\n]%*c", &str);
    // to indicate new line..

    reverse(str);
    reverseWord(str);
}