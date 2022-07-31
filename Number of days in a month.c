#include<stdio.h>
int main()
{
    int m,n;
    printf("\n\nEnter the month number of your choice between 1 to 12\n\n");
    scanf("%d",&m);
    switch (m)
    {

case 1:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    case 2:
    printf("\n\nThere are either 28 or 29 days in your month\n\n");
    break;
    case 3:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    case 4:
    printf("\n\nThere are 30 days in your month\n\n");
    break;
    case 5:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    case 6:
    printf("\n\nThere are 30 days in your month\n\n");
    break;
    case 7:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    case 8:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    case 9:
    printf("\n\nThere are 30 days in your month\n\n");
    break;
    case 10:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    case 11:
    printf("\n\nThere are 30 days in your month\n\n");
    break;
     case 12:
    printf("\n\nThere are 31 days in your month\n\n");
    break;
    default:
    printf("\n\nYou had to enter a number from 1 to 12, better luck next time!!\n\n");
    break;
    }

    return 0;

}
