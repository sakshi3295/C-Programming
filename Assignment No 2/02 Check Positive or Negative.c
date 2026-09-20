#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("\n %d is Positive Number",No);
    }
    else
    {
        printf("\n %d is Negative Number",No);
    }
    getch();
    return 0;
}
