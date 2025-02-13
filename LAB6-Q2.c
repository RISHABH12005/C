#include<math.h>
#include<stdlib.h>
int main()
{
    int a=2,b=3,c=5;
    float A;
    A=(2*a*(log10 (4*pow(a,2)/b))+abs(pow(b,2)-pow(c,2))-5*sqrt(c)+cos(3.14/6));
    printf("%f\n",A);
    printf("%d\n",(a||(!b))&&(a||c)||(a&&b&&c)||(b&&c));
    printf("%d",(a||b))&(a|c)|(a&b&c)|(b&c);
    return 0;
}
