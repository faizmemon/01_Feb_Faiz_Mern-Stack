#include<stdio.h>
int main()
{
    int Number;
    int i;
    printf("\nEnter Your No. Which You Are Looking For Multiplication Table:");
    scanf("%d",&Number);
    for ( i = 1; i <= 10; i++)
    {
        printf("\n\t %d * %d = %d",Number,i,Number*i);
    }
    
}