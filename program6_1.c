//////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
//
// Description : It is used to calculate the total electricity bill
// according to slab-wise rates.
//
// Input : Electricity Units Consumed
// Output : Total Electricity Bill
// Author : Namrata Balasaheb Kokale
// Date : 22/10/2026
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    if(iUnits < 0)
    {
        printf("Invalid Unit Consumption");
    }
    else if(iUnits <=100)
    {
        fBill = (iUnits * 5);
        printf("Total bill = RS.%.2f", fBill);
    }
    else if(iUnits <=200)
    {
        fBill = ((100 * 5 ) +(iUnits - 100) * 7);
        printf("Total bill = RS.%.2f", fBill);
    }
    else
    {
        fBill = ((100 * 5) + (100 * 7) + ((iUnits - 200) * 10));
        printf("Total bill = RS.%.2f", fBill);
    }

}

int  main()
{
    int iUnits = 0;

    printf("Enter Consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}