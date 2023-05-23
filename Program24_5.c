//Write a program which accept string from user and reverse that string in place
/*
Input  :  "abcd"
Output :  "dcba"

Input  :  "abba"
Output :  "abba"
*/

#include<stdio.h>

void StrRev(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    StrRev(arr);
    printf("Modified string is : %s\n", arr);

    return 0;
}