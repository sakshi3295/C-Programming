#include<stdio.h>
#include<conio.h>
#define Count 10

int main()
{
    int i = 0, Num[Count] = {}, MaxEle = 0, SecMax = 0;

    printf("\n Enter All numbers => \n ");

    for(i = 0; i < Count; i++)
    {
        printf("\n Enter number %d : ",i+1);
        scanf("%d",&Num[i]);

    }

    for(i = 1; i < Count; i++)
    {
        if(Num[i] > MaxEle)
        {
            MaxEle = Num[i];
        }
    }

    for(i = 0; i < Count; i++)
    {
        if(Num[i] > SecMax && Num[i] < MaxEle)
        {
            SecMax = Num[i];
        }
    }
    printf("\n Maximum = %d",MaxEle);
    printf("\n Second Maximum = %d",SecMax);

    getch();
    return 0;
}
