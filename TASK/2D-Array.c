#include <stdio.h>
void main()

{
    int array[3][3];
    int m, f;
    for (m = 0; m < 3; m++)
    {
        for (f = 0; f < 3; f++)
        {
            printf("\nENTER THE VALUE OF ARRAY[%d][%d]:", m, f);
            scanf("%d", &array[m][f]);
        }
    }
    for (m = 0; m < 3; m++)
    {
        for (f = 0; f < 3; f++)
        {

            printf("\narray[%d][%d]:%d", m, f, array[m][f]);
        }
    }
}