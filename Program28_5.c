//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and Toggle first and last nibble of the number.
//Return Modified number(Nibble is a group of four bits)

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;       //1111  0000    0000    0000    0000    0000    0000    1111
    UINT iResult = 0;

    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);
    printf("Result is : %d \n", iRet);

    return 0;
}
