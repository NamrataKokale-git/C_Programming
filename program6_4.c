/////////////////////////////////////////////////////////////////////////////
//
// Function Name : CheckTriangle
//
// Description  : It is used to determine whether three given
//                sides can form a valid triangle.
//
// Input        : Three Integer Values (Sides of Triangle)
// Output       : Valid Triangle / Invalid Triangle
// Author       : Namrata Balasaheb Kokale
// Date         : 22/10/2026
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iside1,int iside2, int iside3)
{
 if((iside1 <= 0) || (iside2 <=0) || (iside3 <=0 ))
 {
    printf("InValid Triangle\n");
 }
else if((iside1 + iside2 >iside3) && (iside2 + iside3 > iside1) && (iside1 + iside3 >iside2))
{
    printf("valid Triangle\n");
}
else
{
    printf("Invalid Triangle\n");
}

}

int main()
{
    int iside1 = 0 , iside2 =0 , iside3 = 0;

    printf("Enter the sides: ");
    scanf("%d %d %d", &iside1 ,&iside2,&iside3);

    CheckTriangle(iside1, iside2, iside3);

    return EXIT_SUCCESS;
}