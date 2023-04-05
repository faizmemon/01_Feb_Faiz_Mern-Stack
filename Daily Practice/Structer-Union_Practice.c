#include<stdio.h>
struct Alldata
{
    int id;
    char name[20];
}fz;
int main()
{
    printf("Enter The Value Of ID:");
    scanf("%d",&fz.id);
    printf("Enter The Value Of Name:");
    scanf("%s",&fz.name);
    printf("\n%s Your ID is:-:%d", fz.name, fz.id);
    return 0;
}
