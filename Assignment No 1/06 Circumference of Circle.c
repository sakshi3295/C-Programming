#include<stdio.h>
#include<conio.h>

int main()
{
    float Radius=0.0,Circumference=0.0, pi=3.14;

    printf("\n Enter Radius of circle :");
    scanf("%f",&Radius);

      Circumference = 2*pi*Radius;

    {
        printf("\n Circumference of Circle is : %.2f",Circumference);
    }
    getch();
    return 0;
}
