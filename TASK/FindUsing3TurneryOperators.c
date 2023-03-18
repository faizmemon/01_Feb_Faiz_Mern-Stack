// WAP to Find Max 3 Turnery Operator.

#include <stdio.h>
void main()
{
int M, F, S, Maximum;
printf("\tENTER THE 1st- M - VALUE : ");
scanf("%d",&M);
printf("\n\tENTER THE 2nd- F - VALUE : ");
scanf("%d",&F);
printf("\n\tENTER THE 3rd- S - VALUE : ");
scanf("%d",&S);
(M > F) ? ((M > S) ? (printf("\n M is Maximum")) : printf("\n S is Maximum")) : (F > S) ? (printf("\n F is Maximum")) : (printf("\n S is Maximum"));
}