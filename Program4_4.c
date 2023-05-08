//Write a program which accepts three numbers and print its multiplication

/*
Input    :    5    4    7
Output   :    140

Input    :    5    0    7
Output   :    35

Input    :    5    0    0
Output   :    5

Input    :    0    0    0
Output   :    0

*/

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    if((iNo1 == 0)  && (iNo2 == 0)  &&  (iNo3 == 0))
    {
        return 0;
    }

    if(iNo1 == 0)                   //Condition for iNo1 = 0
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)                   //Condition for iNo2 = 0
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)                   //Condition for iNo3 = 0
    {
        iNo3 = 1;
    }
    iAns = iNo1 * iNo2 * iNo3;
    return iAns;

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("%d\n", iRet);

    return 0;
}