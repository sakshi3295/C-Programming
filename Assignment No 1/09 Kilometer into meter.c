#include<stdio.h>
#include<conio.h>

int main()
{
    float Km=0.0,M=0.0;

    printf("\n Enter Distance in Kilometer :");
    scanf("%f",&Km);

     M = Km*1000;

     {
         printf("\n Distance in Meters is :%f", M);
     }
     getch();
     return 0;
}
