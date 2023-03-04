// Bitwise Code is & - (And) , | - Or , ! - (Not) , <<- (Swift Left) , >>-(Swift Right) , ~ (Contant)
#include<stdio.h>
void main()
{
   int a,b;
   printf("Enter the value of A and B");
   scanf("%d%d", &a, &b);
   printf("\nBitwise And is:%d", a&b);
   printf("\nBitwise | is:%d",a|b);
   printf("\nBitwise ! is:%d",!(a|b));
   printf("\nBitwise << is:%d",a<<b);
   printf("\nBitwise >> is:%d",a>>b);
   printf("\nBitwise ~ is:%d",~(a|b));
}