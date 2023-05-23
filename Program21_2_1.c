//Accept character from user.
//If character is small display its corresponding capital character, and vice versa,
//and in other cases display as it is.
/*
Input  :  Q
Output :  q

Input  :  m
Output :  M

Input  :  4
Output :  4

Input  :  %
Output :  %
*/

#include<stdio.h>

void Display(char ch)
{
    int Gap = 'a' - 'A';

    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - Gap;
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + Gap;
    }

    printf("%c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}