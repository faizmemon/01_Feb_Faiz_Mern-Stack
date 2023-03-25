#include<stdio.h>
#include<string.h>
int main()

{
    char name[30];
    printf("Enter Your Name :-");
    scanf("%s",&name);

    int length;
    length = strlen(name);

    for ( int m = length; m >= 0; m--)
    {
        printf("%c",name[m]);
    }
    
    int f = 0;

    for ( int m = length; m >= 1; m--)
    {
        f++;
    }

    printf("\n\t%d",f);
    


}