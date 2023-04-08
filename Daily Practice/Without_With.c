#include<stdio.h>
void data(int number)

{
    printf("Your Vehicle Number is ::: %d",number);
}

void main()
{
    int RTO;
    printf("Enter Your Vehicle Number is ");
    scanf("%d",&RTO);
    data(RTO);
}