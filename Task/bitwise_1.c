    // Bitwise Code is & - (And) , | - Or , ! - (Not) , <<- (Swift Left) , >>-(Swift Right) , ~ (Compliment) , ^ (XOR - Exclusive Or)
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
   printf("\nBitwise ~ - Compliment A is:%d",~a);
   printf("\nBitwise ~ - Compliment B is:%d",~b);
   printf("\nBitwise ^ - XOR(Exclusive Or)is:%d", a^b);
}