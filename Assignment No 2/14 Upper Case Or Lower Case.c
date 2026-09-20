#include<stdio.h>
#include<conio.h>

int main()
{
    char ch=0;

        printf("\n Enter the character = ");
        scanf("%c",&ch);

        if(ch>='A'&&ch<='Z')
        {
            printf("\n The character %c is Upper Case",ch);
        }
        else if(ch>='a'&&ch<='z')
        {
            printf("\n The character %c is Lower Case",ch);
        }
          else
          {
              printf("\n The character %c is not a Letter",ch);
          }
          getch();
          return 0;
}
