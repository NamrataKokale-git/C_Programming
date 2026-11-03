//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Aprogram which accept distance in Kilometer and convert it into meter.

// Description  : It is used convert distance.
// Input        : 5
// Output       : 5000
// Author       : Namrata Balasaheb Kokale
// Date         : 3/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNO)
{
   return iNO * 1000;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("distance in meter = %d\n",iRet);

    return EXIT_SUCCESS;
}