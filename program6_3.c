/////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
//
// Description  : It is used to calculate the final payable amount
//                after applying discount based on purchase amount.
//
// Input        : Purchase Amount
// Output       : Final Payable Amount
// Author       : Namrata Balasaheb Kokale
// Date         : 22/10/2026
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Purches");
    }
    else if(fAmount < 1000)
    {
        fDiscount = 0;
        fFinalAmount = fAmount - fDiscount;
        printf("Final Payable Amount = %.2f", fFinalAmount);
    }
    else if(fAmount < 5000)
    {
        fDiscount = fAmount * 0.10;
        fFinalAmount = fAmount - fDiscount;
        printf("Final payable Amount = %.2f",fFinalAmount);
    }
    else 
    {
        fDiscount = fAmount * 0.20;
        fFinalAmount = fAmount - fDiscount;
        printf("Final payable Amount = %.2f",fFinalAmount);
    }
    
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purches Amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}