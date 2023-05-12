//Accept N numbers from user and return the difference between largest and smallest number
/*
Input  :  N        : 6
          Elements : 85  66  3  66  93  88
Output :  90  (93 - 3) 
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iLarge = 0, iSmall = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return (iLarge - iSmall);
}

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Difference is : %d\n", iRet);
    free(p);

    return 0;
}