#include<stdio.h>
struct getdata
{
    int rtocode;
    int platenumber;
    char name[10];
    char statecode[10];
    char seriescode[10];
}gj;
int main()
{
    printf("Enter Your Full Name ::");
    scanf("%s",&gj.name);
    printf("Enter Your State Code ::");
    scanf("%s",&gj.statecode);
    printf("Enter Your District RTO Code ::");
    scanf("%d",&gj.rtocode);
    printf("Enter Your Series Code ::");
    scanf("%s",&gj.seriescode);
    printf("Enter Your Vehicle RTO Parcing Number ::");
    scanf("%d",&gj.platenumber);
    printf("\n\nHello Dear,\nMR.%s Please Welcome To Our RTO Information App : \n\n\tYour Vehicle Number is : \n\n\t%s%d%s\n\t%d",gj.name,gj.statecode,gj.rtocode,gj.seriescode,gj.platenumber);
    return 0;
}
