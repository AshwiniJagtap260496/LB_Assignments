//Bitwise Operation
//Complete below code snippets it contains only service provider function.
//Write entry point function to call below helper functions seprately.

//Write a program which accept two numbers from user and display position of common ON(1) bits from that two numbers
/*
Input  :  10    15      (1010   1111)
Output :  2     4
*/

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iCount1 = 0, iCount2 = 0;

    while(iNo1 > 0)
    {
        iNo1 = iNo1 & (iNo1 - 1);

        iCount1++;
    }
    printf("Number of ON(1) bits are : %d\t", iCount1);

    while(iNo2 > 0)
    {
        iNo2 = iNo2 & (iNo2 - 1);

        iCount2++;
    }
    printf("%d\n", iCount2);
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}
