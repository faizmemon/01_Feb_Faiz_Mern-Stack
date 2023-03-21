// WAP to a Pyramid Pattern

#include <stdio.h>
int main()

{
    int m, f;
    int count = 20;

    for ( m = 0; m <= 20; m++)
    {
        // for (int k = 0; k < count; k++)
        // {
            // printf("  ");
        //}

        // count -- ;
        for ( f = 0; f <= m; f++)
        {
            printf(" ");
        }
        count--;
        for (int k = 0; k < count; k++)
        {
            printf("%d",f);
        }
        printf("\n ");
        
    }
    
        
    
    
    
}