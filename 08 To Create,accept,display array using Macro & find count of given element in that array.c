#include<stdio.h>
#include<conio.h>
# define Num 7

int main()
{
    int i = 0, No[Num] = {}, count = 0 ,src = 0;

    printf("\n Enter All elements:\n");

    for(i = 0; i < Num; i++)
    {
        printf("\n Enter the number %d : ",i+1);
        scanf("%d",&No[i]);
    }

    printf("\nEnter element to find count: ");
    scanf("%d",&src);

    for(i = 0; i < Num; i++)
    {
        if(No[i] == src)
        {
            count++;
        }
    }

    printf("\n Count of %d = %d", src, count);

    getch();
    return 0;
}
