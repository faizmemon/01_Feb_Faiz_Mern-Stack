// Function Practice
// Without Return Type And Without Perameter

#include<stdio.h>

int Number;

void dataget()

{
    printf("Enter Your Vehicle Number Plate:/");
    scanf("%d",&Number);
}

void datashow()
{
    printf("\n\tYour Vehicle Number is -- %d",Number);
}

void main()
{
    dataget();
    datashow();
}