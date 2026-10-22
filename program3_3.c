//////////////////////////////////////////////////////////////
//
// Function Name : DisplayFactor
// Description   : It is used to display all even
//                 factors of the given number
//                 except 4.
// Input         : Integer
// Output        : Integer
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNO)
{
    int i = 0;

    if(iNO <= 0)
    {
        iNO = -iNO;
    }

    for(i=1; i<iNO; i++)
    {
        if((iNO % i == 0) && (i % 2 == 0) && (i != 4))
        {
            printf("%d",i);
        }
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}