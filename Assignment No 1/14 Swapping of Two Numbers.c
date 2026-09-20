#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0,b=0,Temp=0;

    printf("\n Enter a = ");
    scanf("%d",&a);
    printf("\n Enter b = ");
    scanf("%d",&b);

    Temp = a;
    a = b;
    b = Temp;

    {
        printf("\n After Swapping a = %d , b = %d",a,b);
    }
    getch();
    return 0;
}

