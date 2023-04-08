#include<stdio.h>
union Mydata
{
    int Number;
    char Name[20];
}Object;

int main()
{
    printf("Enter Your Mobile Number ::");
    scanf("%d",&Object.Number);
    printf("Enter Your Name ::");
    scanf("%s",&Object.Name);
    printf("\n MR.%s Your Mobile Number is %d",Object.Name,Object.Number);
    return 0;
}
