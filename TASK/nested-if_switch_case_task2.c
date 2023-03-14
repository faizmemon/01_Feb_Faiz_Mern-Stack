#include <stdio.h>
void main()
{
    int Hotdrinks, Colddrinks;
    int choice1;
    int choice2;
    printf("\n\t1).Hot Drinks \n\n\t2).Cold drinks");
    printf("\n\n\t -- Enter Your Choice - ");
    scanf("%d", &choice1);
    switch (choice1)
    {
    case 1:
        printf("\n\t - (1.) Hot Drinks:");
        printf("\n\n\t\t1)Hot Water: \n\n\t\t2)Tea: \n\n\t\t3)Cofee:");
        printf("\n\n\tWhat Do You Like To It-");
        scanf("%d", &choice2);

        switch (choice2)
        {
        case 1:
            printf("\n\t\t\tHOT WATER - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 2:
            printf("\n\t\t\tTEA - \n\n\t\tYes, \n\n\t\tWaiting For 5 Minute Your Order is Prepared \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 3:
            printf("\n\t\t\tCOFEE - \n\n\t\tYes, \n\n\t\tWaiting For 5 Minute Your Order is Prepared \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        default:
            printf("\n\nSorry for Inconvience ,But Its Not Available");
            break;
        }
        break;
    case 2:
        printf("\n\t - (2.)Cold Drinks:");
        printf("\n\n\t\t1)Cold Water: \n\n\t\t2)Thums-Up: \n\n\t\t3)Dawat: \n\n\t\t4)Coca-Cola: \n\n\t\t5)Sprite: \n\n\t\t6)Redbull: \n\n\t\t7)Monster: \n\n\t\t8)Sting: \n\n\t\t9)Fanta: \n\n\t\t10)MountainDew:");
        printf("\n\n\tWhat Do You Like To It-");
        scanf("%d", &choice2);

        switch (choice2)
        {
        case 1:
            printf("\n\t\t\tCOLD WATER - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming  ");
            break;

        case 2:
            printf("\n\t\t\tTHUMS-UP - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 3:
            printf("\n\t\t\tDAWAT - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 4:
            printf("\n\t\t\tCOCA-COLA - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 5:
            printf("\n\t\t\tSPRITE - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 6:
            printf("\n\t\t\tREDBULL - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 7:
            printf("\n\t\t\tMOSTER - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming  ");
            break;
        case 8:
            printf("\n\t\t\tSTING - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 9:
            printf("\n\t\t\tFANTA - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        case 10:
            printf("\n\t\t\tMOUNTAINDEW - \n\n\t\tYes, \n\t\tYour Order is Here\n\t\tEnjoy With Your Order\n\t\tPlease Take It Carefully \n\n\t\tYour Bill Amount Is--$ \n\n\t\tThank You For Coming ");
            break;
        default:
            printf("\n\nSorry for Inconvience ,But Its Not Available");
            break;
        }
        break;
    default:
        printf("\n\nSorry for Inconvience ,But Its Not Available");
        break;
    }
}