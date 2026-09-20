#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int SquareRoot=0,No=0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

     SquareRoot=(sqrt(No));

     {
        printf("\n The SquareRoot of %d is : %d",No,SquareRoot);
     }
     getch();
     return 0;
}

