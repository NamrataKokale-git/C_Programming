//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program to calculate Area of circle.

// Description  : It is used to calculate area.
// Input        : 5.3
// Output       : 88.2026
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = 3.14 * fRadius * fRadius;
    return fArea;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0 ;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle = %.2f\n",dRet);

    return 0;

}