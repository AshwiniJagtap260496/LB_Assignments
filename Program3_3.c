//Write a program which accepts number from user and display all its Non-Factors

/*
Input    :     12
Output   :     5    7    8    9    10    11

Input    :     13
Output   :     2    3    4    5    6    7    8    9    10    11    12

Input    :     10
Output   :     3    4    6    7    8    9

*/

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)                // O(N)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}


//Time Complexity:     O(N)         optimisation not possible