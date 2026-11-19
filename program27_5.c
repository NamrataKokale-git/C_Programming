//////////////////////////////////////////////////////////////////////////////
// 
// Function Name : Program which accept string from user and display it in reverse order.
// Description  : It is used to display given input in reverse order..
// Input        : "Marvellous" 
// Output       : "suollevraM" 
// Author       : Namrata Balasaheb Kokale
// Date         : 20/10/2026
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void Reverse(char *str)  
{
    char *Start = str;
    char *End = str;
    char temp;

     while(*End != '\0')
        {
            End++;
        }
          End--;

     while(Start < End)
        {
            temp = *Start;
            *Start = *End ;
            *End   = temp;
            
            Start++;
            End--;
        } 
     
           
}
      
int main()
{
    char Arr[20];
    int iRet = 0;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);
    printf("%s\n",Arr);

    return EXIT_SUCCESS;
}