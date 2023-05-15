/*
Design application for school management system.
As school is primary, there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard Fees are 8900,
for second standard Fees are 12790,
for third standard Fees are 21000,
and for fourth standard Fees are 23450.
We have to accept standard from user and display the corresponding fees.

Input  :  2       Output  :  12790
Input  :  4       Output  :  23450
Input  :  6       Output  :  Wrong Input

*/

#include<stdio.h>

#define ERR_WRONGINPUT -1

int SchoolFees(int iStandard)
{
    int iFees = 0;
    switch(iStandard)
    {
        case 1:
            iFees = 8900;
            break;
        case 2:
            iFees = 12790;
            break;
        case 3:
            iFees = 21000;
            break;
        case 4:
            iFees = 23450;
            break;
        default :
            iFees = ERR_WRONGINPUT;
    }
    return iFees;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Standardn(1 - 4): \n");
    scanf("%d", &iValue);

    iRet = SchoolFees(iValue);
    if(iRet == ERR_WRONGINPUT)
    {
        printf("Wrong Input\n");
    }
    else
    {
    printf("%d\n", iRet);
    }

    return 0;
}