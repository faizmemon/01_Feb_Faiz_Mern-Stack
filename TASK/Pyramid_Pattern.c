// WAP to a Pyramid Pattern

#include <stdio.h>
int main()

{
    int m, f;
    int space = 15;
    for ( m = 0; m > 15 ; m--)  // ROW // Horizondal Line // Aadi Line
    {
        for ( int k = 0; k < space; k++) // COLUM // Vertical Line // Ubhi Line
        {
            printf(" ");
        }

        space--;
        for ( f = 0; f <= m; f++)
        {
            printf("%d",m);
        }
        printf("\n");
        
        
    }
    
    
}