#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0 , Num[10] = {}, ZeroNum = 0;

    printf("\n Enter All elements => \n");

    for(i = 0; i < 10; i++)
    {
        printf("\n The %d element is : ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] == 0)
        {
            ZeroNum++;
        }
    }
    printf("\n The count of Zero numbers in All elements is %d \n",ZeroNum);

    getch();
    return 0;
}

