//Write a program which accept string from user and accept one character.
//Return index of last occurrence of that character.
/*
Input  :  "Marvellous Multi OS"      'M'
Output :  11

Input  :  "Marvellous Multi OS"      'W'
Output :  -1

Input  :  "Marvellous Multi OS"      'e'
Output :  4
*/

#include<stdio.h>
#define ERR_NOTFOUND -1

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("Character not found in string\n");
    }
    else
    {
        printf("Characters last location(index) is :%d\n", iRet);
    }

    return 0;
}