// WAP to check vowels and consonents

#include<stdio.h>
void main()

{
    char character;
    printf("ENTER ANY SINGLE CHARACTER - ");
    scanf("%c",&character);

    if (character == 'a' || character == 'A' || character == 'e' || character == 'E' || character == 'i' || character == 'I' || character == 'o' || character == 'O'|| character == 'u'|| character == 'U')    
    {
        printf("This Character is Vowels - ");
    }
    else if ( character >= 65 &&  character <= 122 && ! (character == 'A'||  character == 'E' ||  character == 'I' || character == 'O' ||  character == 'U' ) )
    {
        printf("This Character is Consonents");
    }
    else 
    {
        printf("This Character is Number , Character And Symbol");
    }
    
}