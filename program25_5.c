//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Accept division of student from user and  depends on the division exam timing.there are 4 division in school as A,B,C,D.Exam of division A at 7AM,B at 8.30Am, C at 9.20AM and D at 10.30Am.
// Description  : It is used to Display shedule.
// Input        : C
// Output       : Your exam at 9.20AM.    
// Author       : Namrata Balasaheb Kokale
// Date         : 17/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;

void DisplaySchedule(char chDiv)
{  
    if(chDiv == 'A')
    {
        printf("Your Exam is at 7AM");
    }
    else if (chDiv == 'B')
    {
        printf("Your Exam is at 8.30AM");
    }
    else if (chDiv == 'C')
    {
        printf("Your Exam is at 9.20AM");
    }
    else if (chDiv == 'D')
    {
        printf("Your Exam is at 10.30AM");
    }
    else
    {
        printf("Invalid Input");
    }
    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your Division");
    scanf(" %c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
