#include<stdio.h>
void main()
{
    float hight;
    float base;
    float area;
    printf("HIGHT OF TRIANGLE - \n\t");
    scanf("%f",&hight);
    printf("BASE OF TRIANGLE - \n\t");
    scanf("%f",&base);
    area = hight * base;
    printf("TOTAL AREA OF TRIANGLE - \n\t%f",area);
}