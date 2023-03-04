// Bitwise Code is & - (And) , | - Or , ! - (Not) , <<- (Swift Left) , >>-(Swift Right) , ~ (Contant)
#include<stdio.h>
void main()
{
   int a,b;
   printf("Enter the value of A and B");
   scanf("%d%d", &a, &b);
   printf("\nBitwise & - And is:%d", a&b);
   printf("\nBitwise | - Or is:%d",a|b);
   printf("\nBitwise ! - Not is:%d",!(a|b));
   printf("\nBitwise << - Swift Left is:%d",a<<b);
   printf("\nBitwise >> - Swift Right is:%d",a>>b);
   printf("\nBitwise ~ - Constant A is:%d",~a);
   printf("\nBitwise ~ - Constant B is:%d",~b);
}