#include<stdio.h>
#include<conio.h>

int main()
{
    char ch=0;

    printf("\n Enter character = ");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("\n The character %c is Vowel" ,ch);
    }
    else

    {
        printf("\n The character %c is Not Vowel",ch);
    }
    getch();
    return 0;
}
