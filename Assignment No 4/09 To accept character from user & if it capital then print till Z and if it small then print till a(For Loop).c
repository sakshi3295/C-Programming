#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter the character : ");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        for( ; ch <= 'Z'; ch++)
        {
            printf("\n %c" ,ch);
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        for( ; ch >= 'a'; ch-- )
        {
            printf("\n %c" ,ch);
        }
    }

    else
    {
        printf("\n INVALID INPUT");
    }

    getch();
    return 0;
}
