/* Task is Create Matrix
  1 2 3
  4 5 6
  7 8 9

  Create this types of matrix
*/

#include<stdio.h>
void main()

{   
    // F - is Row - AADI LINE - Horizontal
    // Z - is Colum - UBHI LINE - Vertical
    int f,z;

    int Array [3][3] = {1,2,3,4,5,6,7,8,9};

    for ( f = 0; f < 3; f++)
    {
        for ( z = 0; z < 3; z++)
        {
            printf("%d  ", Array[f][z]);
        }


        printf("\n");    
    }
    
    

}