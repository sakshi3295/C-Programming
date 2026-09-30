#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,SrcEle = 0, iNum[10] = {};


    for(i = 0; i < 7; i++)
     {
          printf("\n Enter Value for %d Element : ",i+1);
          scanf("%d",&iNum[i]);
     }

    printf("\n Enter the number to be searched : ");
    scanf("%d",&SrcEle);

    for(i = 0; i < 10; i++)
    {
        if(iNum[i] == SrcEle)
        {
            break;
        }
    }

    if(i < 10)
    {
        printf("\n %d is found at index = %d", SrcEle,i);
    }

    else
    {
        printf("\n %d is not found or available",SrcEle);
    }

    getch();
    return 0;

}




