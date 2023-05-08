//Accept single digit number from user and print it into word (if-else)

/*
Input  :  9
Output :  Nine

Input  :  -3
Output :  Three

Input  :  12
Output :  Invalid Number
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)                           //updator
    {
        iNo = -iNo;
    }

    if(iNo > 9)                           //filter
    {
        printf("Invalid Number\n");
        return;
    }

    if(iNo == 0)
    {
        printf("Zero\n");
    }
    else if(iNo == 1)
    {
        printf("One\n");
    }
     else if(iNo == 2)
    {
        printf("Two\n");
    }
     else if(iNo == 3)
    {
        printf("Three\n");
    }
     else if(iNo == 4)
    {
        printf("Four\n");
    }
     else if(iNo == 5)
    {
        printf("Five\n");
    }
     else if(iNo == 6)
    {
        printf("Six\n");
    }
     else if(iNo == 7)
    {
        printf("Seven\n");
    }
     else if(iNo == 8)
    {
        printf("Eight\n");
    }
     else if(iNo == 9)
    {
        printf("Nine\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}