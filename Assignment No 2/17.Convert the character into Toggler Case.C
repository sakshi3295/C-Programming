#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter the letter : ");
    scanf("%c" ,&ch);

    if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;

            printf("\n Given Letter after converting lowercase to uppercase : %c" , ch );
        }

    else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;

            printf("\n Given Letter after converting Uppercase to lowercase : %c" , ch);
        }
    else
    {
            printf("\n given letter is not alphabet");
    }


    getch();
    return 0;
}
