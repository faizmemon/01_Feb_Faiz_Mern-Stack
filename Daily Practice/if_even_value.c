#include<stdio.h>
void main()
{
    int f;
    printf("Enter the Even Value");
    scanf("%d",&f);
    if (f % 2 == 0)
    {
        printf("\n\tValue is Even");
    }
    else 
    {
        printf("\n\tValue is Not Even");
    }
}