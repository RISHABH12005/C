#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the values 2 No.:\n");
    scanf("%d%d",&n1,&n2);
    if(n1==n2)
    printf("Both No.are =\n");
    else if(n1>n2)
    printf("%d is greater than %d\n",n1,n2);
    else
    printf("%d is smaller than %d\n",n1,n2);
    (n1==n2)?printf("Both No. are ="):(n1>n2)?printf("%is greater than %d,n1,n2"):
    printf("%d is smaller than %d\n",n1,n2);
    return 0;
}
