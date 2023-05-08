//Write a program which accepts number from user and return difference between summation of all its factors and non-factors

/*
Input    :     12
Output   :     -34    (16-50)

Input    :     10
Output   :     -29     (8-37)

*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iResult = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)                    //O(N-1)
    {
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    iResult = iSumFact - iSumNonFact;
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}

//Time complexity:    O(N-1)