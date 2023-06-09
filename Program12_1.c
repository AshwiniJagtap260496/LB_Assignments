//Accept N numbers from user and return the largest number
/*
Input  :  N        : 6
          Elements : 85  66  3  66  93  88
Output :  93 
*/

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iLarge = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }
    return iLarge;
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

    iRet = Maximum(p, iSize);
    printf("Largest number is : %d\n", iRet);
    free(p);

    return 0;
}