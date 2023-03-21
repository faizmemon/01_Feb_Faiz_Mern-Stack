// Module 3.2 Que.2
// WAP to swap two numbers without using third variable 
#include<stdio.h>
int main()

{
    int f,z;
    printf("ENTER THE VALUE OF - F - ");
    scanf("%d",&f);
    printf("ENTER THE VALUE OF - Z - ");
    scanf("%d",&z);

    printf("\n\n\t\t Addition \\\ %d + %d = %d", f, z, f+z);

    printf("\n\n\t\t Substraction \\\ %d - %d = %d", f, z, f-z);

    printf("\n\n\t\t Multiplication \\\ %d * %d = %d", f, z, f*z);

    printf("\n\n\t\t Division \\\ %d / %d = %d", f, z, f/z);

    printf("\n\n\t\t Incriment of F \\\ = %d", ++f);

    printf("\n\n\t\t Incriment of Z \\\ = %d", ++z);

    printf("\n\n\t\t Decrement of F \\\ = %d", --f);

}