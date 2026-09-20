#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=0;

    printf("\n Enter Two Numbers = ");
    scanf("%d %d",&No1,&No2);

    if(No1 > No2)
    {
        printf("\n The Greater Number is %d",No1);
    }
    else
    {
        printf("\n The Greater Number is %d",No2);
    }
    getch();
    return 0;
}
