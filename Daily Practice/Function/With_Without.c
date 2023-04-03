#include<stdio.h>

int no;

int getdata()

{
    printf("Enter Your Vehicle Number:");
    scanf("%d",&no);
    return 0;
    
}
int show()
{
    return no;
}
int main()
{
    getdata();
    printf("\n\tYour Vehicle Number is - %d",show());
    return 0;
}
