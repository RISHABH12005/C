#include<stdio.h>
int main()
{
    int i,j,m,n;
    printf("enter the number");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i>=6-j/i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
