#include<stdio.h>
int main()
{
    int a=8,b=29;
    float c=15.35,d=7.254,sum,average,multiplication,quoitent,reamender;
    sum=(a+b+c+d);
    printf("%f\n",sum);
    average=(sum/4);
    printf("%f\n",average);
    sum=(int)a+(int)b+(int)c+(int)d;
    printf("%f",sum);
    multiplication=(c*d);
    printf("%f\n",multiplication);
    quoitent=(b/a);
    printf("%f\n",quoitent);
    reamender=(b%a);
    printf("%f\n",reamender);
    multiplication=(a*b);
    printf("%o\n",a*b);
    multiplication=(a*b);
    printf("%x\n",a*b);
    return 0;
}
