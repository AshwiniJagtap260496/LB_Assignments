//Write a program which accepts number from user and return summation of all its Non-Factors

/*
Input    :     12
Output   :     50

Input    :     10
Output   :     37

*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)                   //O(N)         
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%D", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n", iRet);

    return 0;
}


//Time complexity:      O(N)            Optimisation not possible