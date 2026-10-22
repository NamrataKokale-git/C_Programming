//////////////////////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
//
// Description  : It is used to calculate the employee bonus
//                based on monthly salary and years of service.
//
// Input        : Monthly Salary and Years of Service
// Output       : Bonus Amount
// Author       : Namrata Balasaheb Kokale
// Date         : 22/10/2026
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;
    if(fSalary <= 0 || iYears < 0)
    {
        printf("Invalid Input");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 0.15f;
        printf("Bonus Amount = %2f" ,fBonus);
    }
    else 
    {
         fBonus = fSalary * 0.05f;
        printf("Bonus Amount = %2f" ,fBonus);
    }
    }

    int main()
    {
        float fSalary = 0.0f;
        int iYears = 0;

        printf("Enter salary and years in service: ");
        scanf("%f %d",&fSalary , &iYears);

        CalculateBonus(fSalary, iYears);
        return EXIT_SUCCESS;
    }

