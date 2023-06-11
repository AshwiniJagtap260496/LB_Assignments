//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and ON its first 4 bits.
//Return Modified number
/*
Input  :  73
Output :  79
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0XF;       //0000  0000    0000    0000    0000    0000    0000    1111
    UINT iResult = 0;

    iResult = iNo | iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = OnBit(iValue);
    printf("Result is : %d \n", iRet);

    return 0;
}

/*
iNo = 577             0010    0100    0001       |
iMean = 0XF           0000    0000    1111
______________________________________________
iResult               0010    0100    1111         


iNo = 65              0000    0100    0001        |
iMean = 0XF           0000    0000    1111
______________________________________________
iResult               0000    0100    1111    

*/