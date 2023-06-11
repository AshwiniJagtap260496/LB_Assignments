//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and OFF 7th and 10th bits of that number if it is ON.
//Return Modified number
/*
Input  :  577
Output :  1
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X240;       //0000  0000    0000    0000    0000    0010    0100    0000
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
iNo = 577             0010    0100    0001       &
iMean = 0X240         0010    0100    0000
______________________________________________
iResult               0010    0100    0000
iResult == iMean

iNo = 577             0010    0100    0001       ^
iMean = 0X240         0010    0100    0000
______________________________________________
                      0000    0000    0001       (else no change in given number)   



iNo = 65              0000    0100    0001        ^
iMean = 0X240         0010    0100    0000
______________________________________________
iResult               0010    0000    0001    (toggle number)(different number than the number when only 7th bit is OFF)

iResult != iMean
*/