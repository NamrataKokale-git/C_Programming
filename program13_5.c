//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept number from user and return difference between summation of even digits and summation of odd 

// Description  : It is used for return difference between digits.
// Input        : 2395
// Output       : -15   (2-17)
// Author       : Namrata Balasaheb Kokale
// Date         : 7/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNO)
{
    int iDigit=0, iEvenSum = 0, iOddSum = 0, iDiff = 0;


    if(iNO < 0)
        {
            iNO = -iNO;
        }
     while(iNO !=0)
    {
        iDigit = iNO % 10;
        
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNO = iNO / 10;
    }
        iDiff = iEvenSum - iOddSum;
    
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

