//Bitwise Operation
//Write a program which checks whether first and last bits are ON or OFF
//First bit means bit number 1 and Last bit means bit number 32

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X80000001;       //1000  0000    0000    0000    0000    0000    0000    0001
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
        printf("first and last(32nd) bits are ON\n");
    }
    else
    {
        printf("first and last(32nd) bits are OFF\n");
    }

    return 0;
}

/*
iNo = 2,147,483,651         1000    0000    0000    0000    0000    0000    0000    0011        &
iMean = 0X80000001          1000    0000    0000    0000    0000    0000    0000    0001
_____________________________________________________________________________________________
iResult                     1000    0000    0000    0000    0000    0000    0000    0001        

iResult == iMean

iNo = 1638                  0000    0000    0000    0000    0000    0110    0110    0111        &
iMean = 0X80000001          1000    0000    0000    0000    0000    0000    0000    0001
_____________________________________________________________________________________________
iResult                     0000    0000    0000    0000    0000    0000    0000    0001        

iResult != iMean
*/