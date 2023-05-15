/*
Design application for income tax department to calculate tax amount.
According to the income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.                                   (10 lakhs - 5 lakhs  =  5 lakhs)
If income is in between 10 to 20 lakhs then there will be 20% tax.                                  (20 lakhs - 10 lakhs  =  10 lakhs)
And for more than 20 lakhs there will be 30% tax.                                                   
We have to accept gross income from user and return the tax ammount.

Input  :  600000    Output  :  10000       (0 + 10000)
Input  :  450000    Output  :  0           
Input  :  1200000   Output  :  90000       (0 + 50000 + 40000)
Input  :  8200000   Output  :  2110000     (0 + 50000 + 200000 + 1860000)
*/

#include<stdio.h>

float IncomeTax(int iAmount)
{
    float fTax = 0.0f;
    if(iAmount <= 500000)
    {
        fTax = 0.0f;
    }
    else if((iAmount > 500000) && (iAmount <= 1000000))
    {
        fTax = ((float)(iAmount - 500000) * 0.1f);
    }
    else if((iAmount > 1000000) && (iAmount <= 2000000))
    {
        fTax = (500000.0f * 0.1f) + ((float)(iAmount - 1000000) * 0.2f);
    }
    else
    {
        fTax = (500000.0f * 0.1f) + (1000000.0f * 0.2f) + ((float)(iAmount - 2000000) * 0.3f);
    }
    return fTax;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter gross income: \n");
    scanf("%d", &iValue);

    fRet = IncomeTax(iValue);
    printf("Tax amount is : %.2f\n", fRet);

    return 0;
}