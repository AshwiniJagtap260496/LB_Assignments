//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and check whether 9th or 12th bit is ON or OFF
/*
Input  :  257
Output :  TRUE
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0X100;       //0000  0000    0000    0000    0000    0001    0000    0000
    UINT iMask2 = 0X800;       //0000  0000    0000    0000    0000    1000    0000    0000
    UINT iResult1 = 0;
    UINT iResult2 = 0;

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
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);
    if(bRet == TRUE)
    {
        printf("9th or 12th bits are ON\n");
    }
    else
    {
        printf("9th or 12th bits are OFF\n");
    }

    return 0;
}