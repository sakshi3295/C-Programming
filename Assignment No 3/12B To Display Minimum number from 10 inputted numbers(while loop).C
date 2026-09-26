#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, No = 0, MinNo = 0;

    printf("\n Enter 10 numbers \n");

    while(i < 10)
    {
        printf("\n Enter the number %d : " ,i+1);
        scanf("%d",&No );

        if((i == 0)|| (No  < MinNo))
        {
            MinNo = No ;
        }
        i++;
    }
     printf("\n The Minimum Number between 10 numbers is :  %d" ,MinNo);

     getch();
     return 0;
}
