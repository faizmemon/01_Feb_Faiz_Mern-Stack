#include<stdio.h>

int addition(int f ,int z)
{
    return f + z;
}

int main()

{
    int a,s;
    printf("Enter The Value Of A and S :");
    scanf("%d%d", &a,&s);
    printf("Your Answer is :::- %d",addition(a , s));
    return 0;
}