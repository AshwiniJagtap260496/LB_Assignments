//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and OFF 7th bit of that number if it is ON.
//Return Modified number
/*
Input  :  79
Output :  15
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X40;       //0000  0000    0000    0000    0000    0000    0100    0000
    UINT iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = OffBit(iValue);
    printf("Result is : %d \n", iRet);

    return 0;
}

/*
iNo = 65              0100    0001       &
iMean = 0X40          0100    0000
______________________________________
iResult               0100    0000 

iNo = 65              0100    0001       ^
iMean = 0X40          0100    0000
______________________________________
iResult               0000    0001    (else no change in given number)    

iResult == iMean

iNo = 23              0001    0111       ^
iMean = 0X40          0100    0000
_______________________________________
iResult               0100    0111      (toggle number)(different number than the number when only 7th bit is OFF)     

iResult != iMean
*/