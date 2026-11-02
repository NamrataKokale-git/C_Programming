//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept single digit from user and print it into  word.

// Description  : It is used to print any digit into word.
// Input        : 9
// Output       : Nine
// Author       : Namrata Balasaheb Kokale
// Date         : 1/11/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    if(iNO < -9 || iNO > 9)
    {
    printf("Invalid Input");
    return;
    }
    if(iNO < 0)
    {
        printf("Minus");
    }
    switch(iNO)
    {
    case 0 :
        printf("Zero");
        break;

        case 1 :
        printf("One");
        break;

        case 2 :
        printf("Twoo");
        break;

        case 3 :
        printf("Three");
        break;

        case 4:
        printf("Four");
        break;

        case 5 :
        printf("Five");
        break;

        case 6 :
        printf("Six");
        break;

        case 7 :
        printf("Seven");
        break;

        case 8:
        printf("Eight");
        break;

        case 9 :
        printf("Nine");
        break;

    }



}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}