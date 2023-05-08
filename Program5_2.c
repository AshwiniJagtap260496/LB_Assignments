//Write a program which accept number from user and print numbers till that number

/*
Input  :  8
Output :  1  2  3  4  5  6  7  8

(*)Input  :  -3
   Output :  1  2  3
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)                  //updator
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)      //O(N)
    {
        printf("%d\t", iCnt);
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