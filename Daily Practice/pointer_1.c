#include<stdio.h>
void main()
{
    int f = 50;
    int *pointer;
    pointer = &f;
    printf("\n\tAddress of F is - %d", pointer);
    // Pointer ++ ;
    // printf("\nAfter Incriment address is - %d",pointer)
    *pointer = 500;
    ++*pointer;
    printf("\n\tIncriment Value of F is - %d",f);
    --*pointer;
    printf("\n\tDecrement Value of F is - %d",f);
    pointer++;
    printf("\naddress is:%d",pointer);

}