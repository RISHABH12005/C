#include<stdio.h>
int pow(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else
    {
        return(a*pow(a,b-1));
    }
}
int main()
{
    int No1,No2;
    printf("Enter the No.:");
    scanf("%d",&No1);
    printf("Enter its pow:");
    scanf("%d",&No2);
    printf("The ans is:%d",pow(No1,No2));
    return 0;
}
