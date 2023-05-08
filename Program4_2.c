//Write a program which accepts one number from user and check whether that number is greater than 100 or not

/*
Input    :    101
Output   :    Greater

Input    :    39
Output   :    Smaller

*/

#include<stdio.h>
//#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    BOOL bAns = FALSE;
    
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}