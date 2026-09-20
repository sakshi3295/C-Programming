#include<stdio.h>
#include<conio.h>

int main()
{
    int A=0,B=0,C=0,Temp=0;

    printf("\n Enter A = ");
    scanf("%d",&A);

    printf("\n Enter B = ");
    scanf("%d",&B);

    printf("\n Enter C = ");
    scanf("%d",&C);

     Temp = A;
     A = B;
     B = C;
     C = Temp;
    {
        printf("\n After Swapping A = %d , B = %d, C = %d",A,B,C);
    }
    getch();
    return 0;
}
