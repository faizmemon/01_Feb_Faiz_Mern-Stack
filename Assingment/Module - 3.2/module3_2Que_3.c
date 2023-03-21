// Module 3.2 Que.3
// WAP to find number is even or odd using ternary operator
#include<stdio.h>
void main()

{
    int f;
    printf("\nENTER ANY NUMBER -");
    scanf("%d",&f);
    (f % 2)? printf("\n%d - is Odd Number",f) : printf("\n%d - is Even Number",f);   

}