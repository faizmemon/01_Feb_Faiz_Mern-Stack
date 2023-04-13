#include<stdio.h>
int main()

{
    int Number1;
    int Number2;
    int Addition;

    printf("Enter Your Two Values:");
    scanf("%d %d", &Number1,&Number2);

    Addition = Number1 + Number2;

    printf("Addition Of %d And %d is :: %d",Number1,Number2,Addition);
}