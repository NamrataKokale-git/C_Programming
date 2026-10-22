//////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
//
// Description  : It is used to check whether a student is eligible
//                for admission based on marks and age.
//
// Input        : Marks and Age
// Output       : Eligible for Admission / Not Eligible / Invalid
// Author       : Namrata Balasaheb Kokale
// Date         : 22/10/2026
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
   if(fMarks < 60 && iAge < 0 )
   {
    printf("Invalid");
   }
   else if(fMarks >= 60 && iAge>=17)
    {
        printf("Eligible for Admission");
    }
    else 
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;

}