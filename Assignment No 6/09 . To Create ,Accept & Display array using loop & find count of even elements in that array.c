#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, ENum = 0;

    printf("\n Enter the 10 elements => \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element is : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] % 2 == 0)
        {
            ENum++;
        }
    }
    printf("\n The count of Even numbers in 10 elements is %d",ENum);

    getch();
    return 0;
}
