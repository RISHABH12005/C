#include<stdio.h>
int swap(int a,int b,int c)
{
    c=a;
    a=b;
    b=c;
    printf("New No.a=%d,b=%d\n",a,b);
}
int main()
{
    int No1,No2,temp;
    printf("Enter the No. of a & b:");
    scanf("%d%d",&No1,&No2);
    swap(No1,No2,temp);
    return 0;
}
