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
    UINT iCount = 0;

    while(iNo > 0)
    {
        iNo = iNo & (iNo - 1);

        iCount++;
    }
    
    return iCount;
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

/*
iNo = 35        0010    0011    &
iNo - 1 =       0010    0010
            __________________________
                0010    0010                (34)          count = 1

iNo = 34        0010    0010    &
iNo - 1 =       0010    0001
            __________________________
                0010    0000                (32)          count = 2 

 iNo = 32       0010    0000    &
iNo - 1 =       0001    1111
            __________________________
                0000    0000                (0)          count = 3                               
*/