#include<stdio.h>
void main()
{
    int number;
    printf("\nEnter The Value Of Number:");
    scanf("%d",&number);
    if (number > 0)
        printf("\n %d is Positive Number",number);
    
    else if (number < 0)
        printf("\n %d is Negetive Number",number);

    else
        printf("\n 0 is Neither Negetive Or Positive");    
}