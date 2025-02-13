// Code of the Sum of the Array in Pointers.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the lenght");
    scanf("%d",&n);
    int arr[n];
    printf("enter the no.");
    for (int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    int sum=0;
    for(int i=0;i<n;i++)
    {
    sum+=*ptr;
    ptr++;
    }
    printf("sum%d\n",sum);
}
