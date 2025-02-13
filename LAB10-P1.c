#include<stdio.h>
int main()
{
    int i,j
    ,m,n;
    printf("enter the row and coloum");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-2;j++)
        {
        printf("*");
        }
        printf("\n");
    }
}
