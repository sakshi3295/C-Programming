#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, Num[10] = {}, SrcEle = 0;

    printf("\n Enter 10 numbers => \n ");

    for(i = 0; i < 10; i++)
    {
        printf("\n Enter number %d : ",i+1);
        scanf("%d",&Num[i]);

    }
    printf("\n Enter the number to be searched : ");
    scanf("%d",&SrcEle);

    for(i = 0; i < 10; i++)
    {
        if(Num[i] == SrcEle)
        {
            break;
        }
    }

    if(i < 10)
    {
        printf("\n %d is found at location = %d", SrcEle,i+1);
    }

    else
    {
        printf("\n %d is not found or available \n ",SrcEle);
    }

    getch();
    return 0;
}
