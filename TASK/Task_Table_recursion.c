// WAP to Create Table Using Recursion

#include<stdio.h>

int main()

{
    int F,Ans,Table;
    printf("\nEnter Your Choicable Table No. :-");
    scanf("%d",&Table);
    printf("\n\tTable Of %d is\n\n",Table);
    for ( F = 1; F <= 10; F++)
    {
        Ans = Table *  F;

        printf("\t\n%d * %d = %d",Table,F,Ans);
    }
    
}