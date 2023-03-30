// Without Return Type With Perameter.
// WAP to print User Name And User ID.

void input(char m[30], char f[30])

{
    printf("Your User Name is \n\n\t%s",m);
    printf("\nYour User ID is \n\n\t%s",f);
}

void main()

{
    char a[30],b[30];
    printf("Enter User Name:");
    scanf("%s",&a);
    printf("\nEnter User ID:");
    scanf("%s",&b);
    input(a,b);
}