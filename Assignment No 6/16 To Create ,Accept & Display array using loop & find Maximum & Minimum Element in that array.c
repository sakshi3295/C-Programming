#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, MaxEle = 0, MinEle = 0;

    printf("\n Enter the 10 elements =>  \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] > MaxEle)
        {
            MaxEle = Num[i];
        }
         if(Num[i] < MinEle)
        {
            MinEle = Num[i];
        }
    }
    printf("\n The Maximum Element of 10 elements is %d \n",MaxEle);
    printf("\n The Minimum Element of 10 elements is %d \n",MinEle);


    getch();
    return 0;
}

