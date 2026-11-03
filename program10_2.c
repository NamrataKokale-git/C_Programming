//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program to calculate Area of Rectangle.

// Description  : It is used to calculate area of Rectangle.
// Input        : 5.3   9.78
// Output       : 51.834
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    {
        double RectArea = 0.0;

        RectArea = fWidth * fHeight ;
        return RectArea;
    }
    
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width");
    scanf("%f", &fValue1);

    printf("Enter Height");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle = %2f\n",dRet);
}