#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0, i = 0;

    printf("\n Enter the number to print table : ");
    scanf("%d",&No);

    for(i = 1; i <= 10; i++)
    {
        printf("\n %d * %2d = %d",No ,i ,No*i);
    }
    getch();
    return 0;
}
