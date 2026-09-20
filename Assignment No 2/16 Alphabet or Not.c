#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 0;

    printf("\n Enter a Alphabet = ");
    scanf("%C",&ch);

    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("\n True");
    }
    else
    {
        printf("\n False");
    }
    getch();
    return 0;

}
