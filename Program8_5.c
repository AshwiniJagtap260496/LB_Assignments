//Write a program which accept number from user and return difference between Summation of even digits and Summation of odd digits

/*
Input  :  2395
Output :  -15    (2 - 17)

Input  :  1018
Output :  6      (8 - 2)

Input  :  8440
Output :  16    (16 - 0)

Input  :  5733
Output :  -18
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;
    if(iNo < 0)                        //updator
    {
        iNo = - iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iSumEven - iSumOdd);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}