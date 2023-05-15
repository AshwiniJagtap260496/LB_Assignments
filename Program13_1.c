/*
Design application for hotel.
According to the management team of hotel they are giving discount of total bill amount of customer.
if bill amount is less than 500 then there is no discount,
if bill amount is less than 1500 and more than 500 they give 10% discount,
and if the bill amount is more than 1500 then they give 15% discount.

Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.

Input  :  1200      Output  :  1080
Input  :  290       Output  :  290
Input  :  3700      Output  :  3145

*/

#include<stdio.h>

float CalculateBill(int iAmount)
{
    float fBill = 0.0f;
    if(iAmount <= 500)
    {
        fBill = (float)iAmount;
    }
    else if((iAmount > 500) && (iAmount <= 1500))
    {
        fBill = ((float)iAmount * 0.9f);
    }
    else
    {
        fBill = ((float)iAmount * 0.85f);
    }
    return fBill;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter total bill amount: \n");
    scanf("%d", &iValue);

    fRet = CalculateBill(iValue);
    printf("Your bill is : %f\n", fRet);

    return 0;
}

/*
for 10% discount  

iBill = iValue * (100 - 10) / 100
      = iValue * (90 / 100)
      = iValue * 0.9
*/