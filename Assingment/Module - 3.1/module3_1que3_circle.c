// WAP to Find Area of Circle
#include<stdio.h>
void main()
{
    float pie;
    float area;
    float radius;
    pie = 3.1415;
    printf("ENTER THE RADIUS OF THE CIRCLE - ");
    scanf("\n\t\t%f",&radius);
    area = pie*radius*radius;
    printf("TOTAL AREA OF CIRCLE IS - \n\n\t%f",area);
}