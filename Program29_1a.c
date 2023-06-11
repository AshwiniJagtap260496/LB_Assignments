//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept one number from user and count number of ON(1) bits in it without using % and / operator
/*
Input  :  11
Output :  3
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    UINT iResult = 0;

    if(iNo == 0)
    {
        return 0;
    }
    else
    {
        return (iNo & 1) + CountOne(iNo >> 1);
    }
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);
    printf("Result is : %d \n", iRet);

    return 0;
}