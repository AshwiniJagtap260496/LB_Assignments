//Write a program which accept number from user and print that number of '$' and '*' on screen
/*
Input  :  5
Output :  $  *  $  *  $  *  $  *  $  *

Input  :  3
Output :  $  *  $  *  $  *

Input  :  -3
Output :  $  *  $  *  $  *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)                        //updator
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo; iCnt++)        //O(N)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}