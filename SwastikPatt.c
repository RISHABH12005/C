// Code of the Swastik Pattern.
#include <stdio.h>
int main()
 {
    int i,j,n,m ;
    printf("enter row &coloum");
    scanf("%d %d",&n,&m);
    for (i = 1; i<=n; i++)
    {
        for (j=1; j<=m; j++)
      {
        if (i==n/2||j==m/2||(j==m && i>=n/2)||(j==1&&i<=n/2)||(i==1&&j>=m/2)||(i==n&&j<=m/2))
        printf("*");
        else
            printf(" ");
      }
        printf("\n");
    }
}
