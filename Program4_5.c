//Write a program which accepts total marks and obtained marks from user and calculate percentage

/*
Input    :    1000   745
Output   :    74.5%

*/

#include<stdio.h>

float Percentage( int iNo1, int iNo2)
{
    float fAns = 0.0f;
    if(iNo1 == 0)              //filter       
    {
        return 0.0f;
    }

    fAns = ((iNo2 *100.0 ) / iNo1);
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);


    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is %.2f\n", fRet);

    return 0;
}