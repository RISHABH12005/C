#include<stdio.h>
int main()
{
    char choice; int x,y;
    printf("Enter an operator:+,-,*,/,%%\n");
    scanf("%c",&choice);
    printf("Enter the 2 no.:");
    scanf("%d%d",&x,&y);
    switch(choice)
    {
    case'+':
        printf("%d+%d=%d\n",x,y,x+y);
        break;
    case'-':
        printf("%d-%d=%d\n",x,y,x-y);
        break;
    case'*':
        printf("%d*%d=%d\n",x,y,x*y);
        break;
    case'/':
        printf("%d/%d=%d\n",x,y,x/y);
        break;
    case'%':
        printf("%d%%%d=%d\n",x,y,x%y);
        break;
        default:
            printf("Invalid Operator Input\n");
    }
    return 0;
}
