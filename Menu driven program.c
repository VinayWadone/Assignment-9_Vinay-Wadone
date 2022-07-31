#include<stdio.h>
int main()
{
    while(1)
    {
    int m,n,k;
    printf("\n\nEnter an option of your choice from the below menu...\n\n");
    printf("\na.Addition\n");
    printf("\nb.Subtraction\n");
    printf("\nc.Multiplication\n");
    printf("\nd.Division\n");
    printf("\ne.Exit\n");
    scanf("%ch",&k);
    switch (k)
    {
    case 97:
    printf("\n\nEnter two numbers of your choice\n\n");
    scanf("%d %d",&m,&n);
    printf("\n\nThe sum of your numbers is: %d\n\n", m+n);
    break;
    case 98:
    printf("\n\nEnter two numbers of your choice\n\n");
    scanf("%d %d",&m,&n);
    printf("\n\nThe difference of your numbers is: %d\n\n", m-n);
    break;
    case 99:
    printf("\n\nEnter two numbers of your choice\n\n");
    scanf("%d %d",&m,&n);
    printf("\n\nThe product of your numbers is: %d\n\n", m*n);
    break;
    case 100:
    printf("\n\nEnter two numbers of your choice\n\n");
    scanf("%d %d",&m,&n);
    printf("\n\nThe quotient of your numbers is: %d\n\n", m/n);
    break;
    case 101:
    break;
    default:
    printf("\n\nYou had to enter an option from the mentioned menu, better luck next time!!\n\n");
    break;
    }
    if (k==101) break;
    }
    return 0;

}
