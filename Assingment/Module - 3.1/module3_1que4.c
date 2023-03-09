// Write a program to Module 3.1 Question No.4. (Simple Intrest)
// WAP to find simple interest 
#include<stdio.h>
void main()
{
    float amount,duration,intronrate;
    float intrest;
    float ans;
    printf("\n\tENTER THE AMOUNT - ");
    scanf("%f",&amount);
    printf("\n\tENTER THE LOAN PAYING YEAR - ");
    scanf("%f",&duration);
    printf("\n\tENTER THE INTREST ON RATE - ");
    scanf("%f",&intronrate);
    intrest = (amount*duration*intronrate) / (100);
    printf("\nYOUR INTEREST ON RATE IS - %f",intrest);
    ans = amount+intrest;
    printf("\n\nYOUR TOTAL AMOUNT WITH INTEREST IS - %f",ans);



}
