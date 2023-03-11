// Write Our Age Through This Year 2023
#include<stdio.h>
void main()
{
    // In This Year My Age is 21
    int a;
    int ans;
    printf("Enter The Age Of 2023 = ");
    scanf("%d",&a);
    ans = a++; // Incriment in 2023 Age And Comes to the 2024 Age
    printf("\nYour Age in 2024 is = %d",a);

    ans = a--; // Decriment in 2023 Age And Comes to the 2021 Age
    printf("\nYour Age in 2022 is = %d",a);


}