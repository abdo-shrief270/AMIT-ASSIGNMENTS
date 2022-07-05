#include <stdio.h>
#include <string.h>

int main()
{
    int count, start, end, len, len2, startPrint = 999999999;
    char str[100];
    char word[100];
    printf("\n\tEnter The String  = ");
    scanf("%[^\n]%*c", str);
    // to indicate new line..

    len = strlen(str);
    end = len - 1;
    start = 0;
    printf("\n\tThis part to reverse Order Of words : \n\t-------------------------------------\n\n\t");
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ' || i == 0)
        {
            if (i == 0)
                start = 0;
            if (str[i] == ' ')
                start = i + 1;

            for (int k = start; k <= end; k++)
                printf("%c", str[k]);

            end = i - 1;
            printf(" ");
        }
    }

    printf("\n\n\tThis part to reverse Specific word : \n\t------------------------------------\n");
    printf("\n\tEnter the Word : ");
    scanf("%[^\n]%*c", word);
    len2 = strlen(word);
    for (int i = 0; i <= len - 1; i++)
    {
        if (str[i] == word[0])
        {
            count = 0;

            for (int j = 0; j < len2; j++)
            {
                if (str[i + j] == word[j])
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
                    temp = str[start];
                    str[start] = str[end];
                    str[end] = temp;
                    start++;
                    end--;
                }
            }
        }
    }
    printf("\n\tThe output :\n\t------------\n\n\t%s\n", str);
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
