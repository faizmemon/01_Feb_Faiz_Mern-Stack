#include<stdio.h>
void main()

{
    char String[15];
    int m, length = 0;
    


    printf("Enter a String : \n\n\t");
    scanf("%s",String);

    for ( m = 0; String[m] != '\0' ; m++)
    {
        length++;
    }

    printf("\nLength of String is :- %d",length);
    

}