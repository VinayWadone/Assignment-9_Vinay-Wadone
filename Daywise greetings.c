#include<stdio.h>
int main()
{
while (1)
{
int a,b,c;
printf("\n\nEnter a number from 1 to 7\n\n");
scanf("%d", &a);

switch (a)
{
case 1:
printf("\n\nHave a great Monday\n\n");
break;
case 2: printf("\n\nHave a great Tuesday\n\n");
break;
case 3: printf("\n\nHave a great Wednesday\n\n");
break;
case 4: printf("\n\nHave a great Thursday\n\n");
break;
case 5: printf("\n\nHave a great Friday\n\n");
break;
case 6: printf("\n\nHave a great Saturday\n\n");
break;
case 7: printf("\n\nHave a great Sunday\n\n");
break;
default: printf("\n\nInvalid Entry\n\n");
}
}
return 0;
}
