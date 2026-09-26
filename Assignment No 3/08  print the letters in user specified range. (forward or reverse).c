#include<stdio.h>
#include<conio.h>

int main()
{
    char ch1 = '\0', ch2 = '\0';

    printf("\n Enter First Character: ");
    ch1 = getche();

    printf("\n Enter Second Character: ");
    ch2 = getche();


    if(((ch1 >= 'A' && ch1 <= 'Z') || (ch1 >= 'a' && ch1 <= 'z')) && ((ch2 >= 'A' && ch2 <= 'Z') || (ch2 >= 'a' && ch2 <= 'z')))
    {

        if(ch1 <= ch2)
        {
            for( ; ch1 <= ch2 ; ch1++)
            {
                printf("\n %c", ch1);
            }
        }
        else
        {
            for( ; ch1 >= ch2 ; ch1--)
            {
                printf("\n %c", ch1);
            }
        }
    }

    else
    {
        printf("\n Invalid Input \n");
    }

    getch();
    return 0;
}
