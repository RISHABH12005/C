#include<stdio.h>
int main()
{
    int A,B,C,D;
    A=60,B=80,C=40;
    D=30*(A+B+C/1000);
    printf("Monthly consume unit =%d\n",D);
    printf("Monthly bill =%d\n",D*8*12);
    return 0;
}
