//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and count frequency of such a digits which are less than 6. 

// Description  : It is used for count frequency.
// Input        : 2395
// Output       : 3
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Count(int iNO)
{
        int iCnt = 0;
        int iDigit = 0;

        if(iNO < 0)
        {
            iNO = - iNO;
        }

        while(iNO != 0)
        {

            iDigit = iNO % 10;

            if(iDigit < 6)
            {
                iCnt++;
            }

        iNO = iNO / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
