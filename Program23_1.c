//Write a program which accept string from user and convert it into lower case
/*
Input  :  "Marvellous Multi OS"
Output :  "marvellous multi os"
*/

#include<stdio.h>

void strlwrX(char *str)
{
    int Gap  = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    strlwrX( arr);
    printf("Modified string is : %s\n", arr);

    return 0;
}