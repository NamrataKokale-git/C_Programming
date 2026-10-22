//////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display the given
//                 number on screen specified number
//                 of times.
// Input         : Integer, Integer
// Output        : Integer
// Author        : Namrata Balasaheb Kokale
// Date          : 21/10/2026
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO, int iFrequency)
{
    int i= 0;

    for(i = 1; i<= iFrequency; i++)
    {
       printf("%d\t",iNO);
    }
}

int main()
{
    int ivalue = 0;
    int icount = 0;

    printf("Enter number");
    scanf("%d", &ivalue);

    printf("Enter Frequency");
    scanf("%d",&icount);

    Display(ivalue,icount);

    return 0;
}