#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    printf("Enter The Value Of A and B");
    scanf("%d%d",&a,&b);
    a &= b;
    printf("That is the Answer is = %d",a);
    

}