//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and display its multiplication of factors.

// Description  : It is used for display its multiplication of its factors.
// Input        : 12
// Output       : 144       (1 * 2 * 3 * 4 * 6)
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNO)
{
    int iCnt = 0 , iValue = 0, MultFact = 1;

    for(iCnt = 1; iCnt <=iNO/2 ; iCnt++ )
    {
        if(iNO % iCnt == 0)
        {
            MultFact = MultFact * iCnt;
        }
    
    }
    return MultFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
