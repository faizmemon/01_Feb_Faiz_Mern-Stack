/*
+,-,*,/,%,++,--
*/
#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    printf("Enter the value of A and B");
    scanf("%d%d",&a,&b);
    ans= a+b;
    printf("\nAddition of A and B %d",ans);
    ans= a-b;
    printf("\nSubstraction of A and B %d",ans);
    ans= a*b;
    printf("\nMultiplication of A and B %d",ans);
    ans= a/b;
    printf("\nDivision of A and B %d",ans);
    ans = a%b;
    printf("\nModulo of A and B %d",ans);
    ans = a++;
    printf("\nIncriment of A Value %d",a);
    ans = b--;
    printf("\nDecrement of B Value %d",b);

}