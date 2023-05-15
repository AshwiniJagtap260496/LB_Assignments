/*
We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent.
If running is less than 100 Kilometers then they charge 25 rupees per Kilometer.
And if running is more than 100 Kilometers then they apply 15 rupees per kilometer after 100 Kilometers.
We have to accept number of Kilometers from user and return the estimated rent.

Input  :  73        Output  :  1825
Input  :  132       Output  :  2980
Input  :  189       Output  :  3835
*/

#include<stdio.h>

int TouristBill(int iKilometer)
{
    int iRent = 0;
    if(iKilometer <= 100)
    {
        iRent = iKilometer * 25;
    }    
    else
    {
        iRent = (100 * 25) + ((iKilometer- 100) * 15);
    }
    
    return iRent;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of Kilometers car runs: \n");
    scanf("%d", &iValue);

    iRet = TouristBill(iValue);
    printf("Estimated Rent is : %d\n", iRet);

    return 0;
}