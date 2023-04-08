#include<stdio.h>
struct Mydata
{
    int Number;
    char Name[20];

}Object;

int main()
{
    struct Mydata Object[20];
    int i;
    for ( i = 0; i < 2; i++)
    {
       printf("Enter Your Mobile Number ::");
       scanf("%d",&Object [i].Number);
       printf("Enter Your Name ::");
       scanf("%s",&Object[i].Name);
    }
    for ( i = 0; i < 2; i++)
    {
        printf("\nMR. %s Your Mobile Number is - %d",Object[i].Name,Object[i].Number);
    }
    return 0;
    
    
}
