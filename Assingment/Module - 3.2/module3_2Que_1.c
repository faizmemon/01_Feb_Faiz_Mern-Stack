// Module 3.2 Question 1
//  WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) 
#include<stdio.h>
void main()
{
    int f, z, count;
    int answer;
    printf("\nWrite in Format What are you calculating this ");
    printf("\n\t(1) +  Addition,  \n\t(2) - Substraction, \n\t(3) * Multiplication, \n\t(4) / Division, \n\t(5) Modulo,  ");
    printf("\nENTER YOUR 1st VALUE - ");
    scanf("%d",&f);
    printf("\n\tChoose Any One - ");
    scanf("\n%d",&count);
    printf("\nENTER YOUR 2nd VALUE - ");
    scanf("%d",&z);

    switch (count)
    {
    case 1:
        printf("%d + %d = %d", f,z,f +z);
        break;

    case 2:
        printf("%d - %d", f,z,f-z);
        break;
    
    case 3:
        printf("%d * %d", f,z,f*z);
        break;

    case 4:
        printf("%d / %d", f,z,f/z);
        break;
    
    default:
        printf("\nNot Calculating");
        break;
    }

}