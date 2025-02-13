// Code of Pattern
#include <stdio.h>
int main()
 {
    int i,j,n,m ;
    printf("enter row &coloum");
    scanf("%d %d",&n,&m);
    for (i = 1; i<=n+1; i++)
    {
        for (j=1; j<=m+1; j++)
      {
        if (i==n/2||j==m/2)
        printf("*");
      }
        printf("\n");
    }
}
