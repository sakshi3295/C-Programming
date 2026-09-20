#include<stdio.h>
#include<conio.h>

int main()
{

  int No1=0,No2=0,Result=0;

    printf("\n Enter A Number1 :");
    scanf("%d",&No1);
    printf("\n Enter A Number2 :");
    scanf("%d",&No2);

    Result=No1*No2;
    {
        printf("\n The result of multiplying %d and %d is: %d ",No1,No2,Result);
    }
     getch();
     return 0;

}
