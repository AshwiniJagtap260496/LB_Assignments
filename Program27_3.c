//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and toggle 7th bit of that number.
//Return Modified number
/*
Input  :  137
Output :  201
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X40;       //0000  0000    0000    0000    0000    0000    0100    0000
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

/*
iNo = 65              0100    0001       ^
iMean = 0X40          0100    0000
______________________________________
iResult               0000    0001       


iNo = 23              0001    0111       ^
iMean = 0X40          0100    0000
_______________________________________
iResult               0100    0111      (toggle number)

*/