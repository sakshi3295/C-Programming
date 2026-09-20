#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;

    printf("\n Enter a Number =");
    scanf("%d",&No);

    if((No % 5 == 0) && (No % 7 == 0))
    {
        printf("\n %d is Divisible By Both 5 and 7",No);
    }
    else
    {
        printf("\n %d is Not Divisible By 5 and 7",No);
    }
    getch();
    return 0;
}
