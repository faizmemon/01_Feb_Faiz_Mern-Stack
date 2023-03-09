// Write a program to Module 3.1 Question No.2.
#include<stdio.h>
void main()
{
    int f,z;
    int feedback;
    printf("ENTER THE VALUE OF F AND Z");
    scanf("%d%d",&f,&z);
    feedback= f+z;
    printf("\n\tAddition of F and Z is - %d",feedback);
    feedback= f-z;
    printf("\n\tSubstraction of F and Z is - %d",feedback);
    feedback= f*z;
    printf("\n\tMultiplication of F and Z is - %d",feedback);
    feedback= f/z;
    printf("\n\tDivision of F and Z is - %d",feedback);
    feedback= f%z;
    printf("\n\tModulo of F and Z is - %d",feedback);
    feedback= f++;
    printf("\n\n\t\t(1)-Incriment of F is %d",f);
    feedback= f--;
    printf("\n\n\t\t(1)-Decrement of F is %d",f);
    feedback= z++;
    printf("\n\n\t\t(2)-Incriment of Z is - %d",z);
    feedback= z--;
    printf("\n\n\t\t(2)-Decrement of Z is %d",z);



}