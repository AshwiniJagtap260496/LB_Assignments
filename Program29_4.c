//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF
/*
Input  :  36    3   7
Output :  TRUE
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0X00000001;       //0000  0000    0000    0000    0000    0000    0000    0001
    UINT iMask2 = 0X00000001;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 == iMask1) || (iResult2 == iMask2))
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
    UINT iValue = 0, iBit1 = 0, iBit2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter first position : \n");
    scanf("%d", &iBit1);

    printf("Enter second position : \n");
    scanf("%d", &iBit2);

    bRet = ChkBit(iValue, iBit1, iBit2);
    if(bRet == TRUE)
    {
        printf("Bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
    }

    return 0;
}