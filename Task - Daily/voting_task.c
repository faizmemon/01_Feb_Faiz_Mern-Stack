// Enter Your Birth date And Find Out He or She is Eligible for Vote.
#include<stdio.h>
void main()
{
    int age;
    printf("Enter Your Birth Year");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("Yes, Your Are Eligible For Voting");
    }
    
    
    else
    {
        printf("No Sorry, But U Are Not Eligible For Voting");
    }
}