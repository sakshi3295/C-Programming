#include<stdio.h>
#include<conio.h>

int main()
{
    float Area=0.0, Side=0.0;

     printf("\n Enter Side length of Square :");
     scanf("%f",&Side);

     Area = Side*Side;

     {
         printf("\n Area of Square is :%f",Area);
     }
     getch();
     return 0;
}
