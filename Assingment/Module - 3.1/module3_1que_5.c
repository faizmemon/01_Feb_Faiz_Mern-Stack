// WAP to check if the given year is a leap year or not. 
// Write a program to Module 3.1 Question No.5.
#include<stdio.h>
void main()
// Leap Year Comes To 4 To 5 Year in One Time.
{
    int year;
    printf("ENTER THE YEAR - ");
    scanf("%d",&year);

    if (year % 400 == 0) // Perfectly Divided by 400 it is Leap Year. - (Leap Year)
    {
        printf("\n\tYes,\n\tThis year is leap year - \n\t%d",year);
    }
    else if (year % 100 == 0) // Not Leap Year is divided by 100 But not divided by 400. - (Not Leap Year)
    {
        printf("\n\tNo,\n\tThis year is not leap year - \n\t%d",year);
    }
    else if (year % 4 == 0) // Leap Year is Not Divided by 100 But Divided by 4. - (Leap Year)
    {
        printf("\n\tYes,\n\tThis year is leap year - \n\t%d",year);
    }
    else
    {
        printf("\n\tNo,\n\tThis year is not leap year - \n\t%d",year);
    }
}
