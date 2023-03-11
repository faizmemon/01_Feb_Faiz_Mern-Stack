#include<stdio.h>
void main()
// We are going to purchase any of the item and get the discount prize program
{
    int prize, discount; // We are purchase Hand watch and get offer and discount.
    int intrest;
    printf("\n\t1-ENTER THE PRIZE OF THE ITEM -"); // Hand Watch prize
    scanf("%d",&prize);
    printf("\n\t2-ENTER THE DISCOUNT OF THE ITEM -"); // Discount rate on offer
    scanf("%d",&discount);
    intrest= prize*discount/100;
    printf("\n\t-- Your Intrest After the Discount is -- %d",intrest); 
    
}
