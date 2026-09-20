#include<stdio.h>
#include<conio.h>

int main()
{
    float fahrenheit=0.0,celsius=0.0;

    printf("\n Enter Temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);

    celsius=(fahrenheit-32)*(5.0/9.0);

    {
        printf("\n Temperature in celsius is :%f ",celsius);
    }
    getch();
    return 0;


}
