//Write a program which accept string from user and display only digits from that string
/*
Input  :  "marve89llous121"
Output :  "89121"

Input  :  "Demo"
Output :  
*/

#include<stdio.h>

void DisplayDigit(char *str, char *dest)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    DisplayDigit( arr, brr);
    printf("String of digits is : %s\n", brr);

    return 0;
}