//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number and position from user and check whether bit at that position is ON or OFF.
//If bit is ON return TRUE otherwise return FALSE
/*
Input  :  10    2
Output :  TRUE
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;       //0000  0000    0000    0000    0000    0000    0000    0001
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0, iBit = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter the bit position : \n");
    scanf("%d", &iBit);

    bRet = ChkBit(iValue, iBit);
    if(bRet == TRUE)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}

/*
iNo = 16385         0100    0000    0000    0001        &
iMean = 0X4000      0100    0000    0000    0000
______________________________________________________
iResult             0100    0000    0000    0000        

iResult == iMean

iNo = 1638          0000    0110    0110    0111        &
iMean = 0X4000      0100    0000    0000    0000
______________________________________________________
iResult             0000    0000    0000    0000        

iResult != iMean
*/