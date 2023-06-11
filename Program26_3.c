//Bitwise Operation
//Write a program which checks whether 7th, 15th and 21st bits are ON or OFF

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X104040;       //0000  0000    0001    0000    0100    0000    0100    0000
    UINT iResult = 0;

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
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);
    if(bRet == TRUE)
    {
        printf("7th, 15th and 21st bits are ON\n");
    }
    else
    {
        printf("7th, 15th and 21st bits are OFF\n");
    }

    return 0;
}

/*
iNo = 1,065,024            0001    0000    0100    0000    0100    0001        &
iMean = 0X104040           0001    0000    0100    0000    0100    0000
___________________________________________________________________________
iResult                    0001    0000    0100    0000    0100    0000        

iResult == iMean

iNo = 1638                 0000    0000    0000    0110    0110    0111        &
iMean = 0X104040           0001    0000    0100    0000    0100    0000
___________________________________________________________________________
iResult                    0000    0000    0000    0000    0100    0000        

iResult != iMean
*/