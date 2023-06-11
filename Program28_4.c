//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number and position from user and Toggle that bit.
//Return Modified number
/*
Input  :  10    3
Output :  14
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;       //0000  0000    0000    0000    0000    0000    0000    0001
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iBit = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter the bit position : \n");
    scanf("%d", &iBit);

    iRet = ToggleBit(iValue, iBit);
    printf("Result is : %d \n", iRet);

    return 0;
}
