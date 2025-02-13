#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter Temperature in Celsius:");
    scanf("%f",&C);
    F=(9/5)*C+32;
    printf("Temperature in Fahrenheit is =f\n",F);
    printf("Temperature in Fahrenheit is = %.3f\n",F);
    printf("Temperature in Fahrenheit is =%d\n",(int)F);
    printf("Temperature in Fahrenheit is =%e\n",F);
    printf("Size in bytes =%d\n",sizeof((short int)F));
    printf("Size in bytes =%d\n",sizeof((int)F));
    printf("Size of bytes =%d\n",sizeof((long int)F));
    printf("Size of bytes =%d\n",sizeof(F));
    printf("Size of bytes =%d\n",sizeof((double)F));
    printf("Size of bytes =%d\n",sizeof((long double)F));
    return 0;
}
