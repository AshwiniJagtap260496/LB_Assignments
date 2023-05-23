//Write a program which accept string from user and convert it into upper case
/*
Input  :  "Marvellous Multi OS"
Output :  "MARVELLOUS MULTI OS"
*/

#include<stdio.h>

void struprX(char *str)
{
    int Gap  = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    struprX( arr);
    printf("Modified string is : %s\n", arr);

    return 0;
}