// Write If & Else ___Syntax is < , > , <= , >= , == , != 
#include<stdio.h>
void main()
{
   int f,z;
   printf("Enter the Value of --");
   printf("\n\tF-");
   scanf("%d",&f);
   printf("\n\tZ-");
   scanf("%d",&z);
   if (!(f < 66 || z >> 66))
   {
      printf ("\n\tRIGHT");
   }
   else
   {
      printf("\n\tWRONG");
   }
}
