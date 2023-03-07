#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    printf("Enter the value of A and B");
    scanf("%d%d",&a,&b);
    b -= a;
    printf("\n\tThat is the answer of=%d",b);
}