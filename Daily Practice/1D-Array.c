#include<stdio.h>
void main()

{
    int Array[5];
    int f;
    for ( f = 0; f < 5; f++)
    {
        printf("\nEnter Value of Array[f]:",f);
        scanf("%d",&Array[f]);

    }
    for ( f = 0; f < 5; f++)
    {
        printf("\narray[%d]:%d",f,Array[f]);
    }
    
    
}