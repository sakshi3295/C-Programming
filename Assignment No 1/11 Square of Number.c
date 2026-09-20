#include<stdio.h>
#include<conio.h>

int main()
{
    int Square=0,No=0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

     Square=No*No;

     {
        printf("\n The Square of %d is : %d",No,Square);
     }
     getch();
     return 0;
}
