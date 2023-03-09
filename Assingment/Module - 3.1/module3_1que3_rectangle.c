#include<stdio.h>
void main()
{
    float length;
    float width;
    float area;
    printf("LENGTH OF RECTANGLE - \n\t");
    scanf("%f",&length);
    printf("\nWIDTH OF RECTANGLE - \n\t");
    scanf("%f",&width);
    area = length * width;
    printf("\nTOTAL AREA OF RECTANGLE - \n\t%f",area);
}