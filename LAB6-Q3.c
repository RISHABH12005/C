#include<stdio.h>
int main()
{
    float A,D;
    printf("Enter the distance in km =");
    scanf("%f",&D);
    A=D*1000;
    printf("Distance in m =%f\n",A);
    printf("Distance in cm =%f\n",A*100000);
    printf("Distance in ft =%f\n",A/3.3);
    printf("Distance in inch =%f\n",A/(3.3*12));
    return 0;
}
