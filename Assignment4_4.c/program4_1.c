#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int ivalue)
{
    if(ivalue > 0)
    {
        printf("Number is positive\n");
        scanf("%d",&ivalue);
    }
    else if(ivalue < 0)
    {
        printf("Number is Negative\n");
        scanf("%d",&ivalue);

    }
    else
    {
        printf("Number is zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
