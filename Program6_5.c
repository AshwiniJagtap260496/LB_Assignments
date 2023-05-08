//Write a program which accept number from user and display its table

/*
Input  :  2
Output :  20  18  16  14  12  10  8  6  4  2

Input  :  5
Output :  50  45  40  35  30  25  20  15  10  5

Input  :  -5
Output :  50  45  40  35  30  25  20  15  10  5
*/

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    if(iNo < 0)            //updator
    {
        iNo = -iNo;
    }   

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {     
        iAns = iNo * iCnt;   
        printf("%d\t", iAns);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}