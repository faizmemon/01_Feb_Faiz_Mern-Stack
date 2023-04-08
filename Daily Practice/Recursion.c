// WAP to find factorial using recursion 

#include<stdio.h>

// Recursive function is long double 

long double fecto(long double Number)
{
    if (Number < 1)
    {
        return = 1;
    }
    // fecto() methode call it self // Automatically
    return Number * fecto(Number - 1);
    
    // Example of - (15 - 1)
}

int main()
{
    long double f;
    printf("Enter the Value of Number :");
    scanf("%LF",&f);
    printf("%LF",fecto(15))
    return 0;

}