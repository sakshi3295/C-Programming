#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0,iNum[7] = {};

    for(i = 0; i < 7; i++)
    {
        printf("\n The value of %d Element => %d", i+1,iNum[i]);
    }


    printf("\n\n press Any Key for Accepting Values \n");
    getch();

     for(i = 0; i < 7; i++)
     {
          printf("\n Enter Value for %d Element : ",i+1);
          scanf("%d",&iNum[i]);
     }

    printf("\n\n press Any Key To Display All Values \n");
    getch();

    for(i = 0; i < 7; i++)
    {
      printf("\n The value of %d Element => %d",i+1,iNum[i]);
    }

    getch();
    return 0;

}



