// WAP to check if the given year is a leap year or not. 
// Write a program to Module 3.1 Question No.6.
#include<stdio.h>
void main()
//Converting Year is in Days and Days is in Year.
{
   float days;
   float years;
   printf("\nEnter Total No. of Days = ");
   scanf("%f",&days);
   years = days / 365;
   printf("Days is Equals to Years - %f",years);
   printf("\nEnter Total No. of Years = ");
   scanf("%f",&years); 
   days = years*365;
   printf("Years is Equals to days - %f",days);

}

