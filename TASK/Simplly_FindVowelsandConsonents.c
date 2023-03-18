// WAP to check Vowels And Consonents

#include<stdio.h>
void main()

{
    char character;
    printf("ENTER ANY SINGLE CHARACTER - ");
    scanf("%c",&character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf("This Character is Vowels");
    }
    else if (character == 'A' || character == 'E' || character == 'I' || character == 'O'|| character == 'U')
    {
        printf("This Character is Vowels");
    }
    else
    {
        printf("This Character is Consonents");
    }
    
    
}