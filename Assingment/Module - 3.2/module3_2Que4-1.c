// Module 3.2 Que 4 (1).
// Monday to Sunday using switch case
#include<stdio.h>
void main()

{
    int days;
    printf("\n\t 1. MONDAY");
    printf("\n\t 2. TUESDAY");
    printf("\n\t 3. WEDNESDAY");
    printf("\n\t 4. THUSDAY");
    printf("\n\t 5. FRIDAY");
    printf("\n\t 6. SATURDAY");
    printf("\n\t 7. SUNDAY");

    printf("\n Enter A Day - Which You Are Looking For :");

    scanf("%d",&days);

    printf("\n\t\t - Today is -");


    switch (days)
    {
    case 1:
        printf("\n\t\t\tMONDAY - ");
        break;

    
    case 2:
        printf("\n\t\t\tTUESDAY - ");
        break;

    case 3:
        printf("\n\t\t\tWEDNESDAY - ");
        break;

    case 4:
        printf("\n\t\t\tTHUSDAY - ");
        break;

    case 5:
        printf("\n\t\t\tFRIDAY - ");
        break;

    case 6:
        printf("\n\t\t\tSATURDAY - ");
        break;

    case 7:
        printf("\n\t\t\tSUNDAY - ");
        break;

    
    default:
        printf("\n\t\t\tNot Any Days");
        break;
    }


}