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
#include<ctype.h>

void Display(char ch)
{
    char ch1 = ch;

    if((ch >= 'a') && (ch <= 'z'))
    {
        ch1 = toupper(ch);
    }
    else if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch1 = tolower(ch);
    }

    printf("%c\n", ch1);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}