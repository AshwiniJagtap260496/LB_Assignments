//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
/*
Input  :  897   3   5       (0011 1000 0001)
Output :  925               (0011 0110 1111)
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0X00000001;       //0000  0000    0000    0000    0000    0000    0000    0001
    UINT iResult = 0;

    iMask = ((iMask << iEnd) - 1) ^ ((iMask << (iStart - 1)) - 1);

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0, iBit1 = 0, iBit2 = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    printf("Enter the start bit position : \n");
    scanf("%d", &iBit1);

    printf("Enter the end bit position : \n");
    scanf("%d", &iBit2);

    iRet = ToggleBit(iValue, iBit1, iBit2);
    printf("Result is : %d \n", iRet);

    return 0;
}
/*
iNo = 897           0000    0011    1000    0001
iStart = 3      
iEnd = 5       

iMask =                     0000   0000    0000    0001
iMask << iEnd               0000   0000    0010    0000        (iMask << 5)
(iMask << iEnd)-1           0000   0000    0001    1111

iMask << (iStart -1)        0000   0000    0000    0100        (iMask << (3-1))  =>          (iMask << 2)
iMask << (iStart -1) -1     0000   0000    0000    0011


(iMask << iEnd)-1           0000   0000    0001    1111         ^
iMask << (iStart -1) -1     0000   0000    0000    0011
_____________________________________________________________________
iResult =                   0000   0000    0001    1100               

iNo =                       0011    1000    0001    ^
iResult =                   0000    0001    1100
_____________________________________________________________________
                            0011    1001    1101
*/