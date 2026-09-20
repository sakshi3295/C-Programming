#include<stdio.h>
#include<conio.h>

int main()
{
    char ch=0;

    printf("\n Enter character = ");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
    {
        printf("\n The character %c is Vowel",ch);
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("\n The character %c is Consonant",ch);
    }
    else
    {
        printf("\n The character %c is Other",ch);
    }
    getch();
    return 0;
}
