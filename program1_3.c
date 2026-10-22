//////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : It is used to display numbers from 5 to 1 on screen
// Input         : NA
// Output        : 5 4 3 2 1
// Author        : Namrata Balasaheb Kokale
// Date          : 20/10/2026
//
////////////////////////////////////////////////////////////////////////////// 

#include<stdio.h>
int Display()
{
    int i = 0;
    i = 5;

    while(i>=1)
    {
        printf("%d",i);
        i--;
    }
}

    int main()
    {
        Display();

        return 0;
    }
