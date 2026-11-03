//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : program which accept tempreture in Fahrenheit and convert it into celcius.

// Description  : It is used convert Tempreture.
// Input        : 10
// Output       : -12.2222      (10-32)*(5/9)
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    float fh = 0.0f;
    float fCs = 0.0f;

    return ((fTemp - 32) * (5.0/9.0));

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter tempreture in Fahrenheit");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius = %.4lf\n", dRet);

    return EXIT_SUCCESS;
}