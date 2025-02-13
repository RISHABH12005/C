#include<stdio.h>
#include<math.h>
int main()
{
    int A;
    float BMI,Kg,H;
    printf("Enter your mass in Kg :");
    scanf("%f",&Kg);
    printf("Enter your hight in H :");
    scanf("%f",&H);
    BMI=Kg/pow(H,2);
    A=ceil(BMI);
    switch(A)
    {
    case 0 ... 18:
        printf("you are underweight");
        break;
    case 19 ... 25:
        printf("you are normal weight");
        break;
    case 26 ... 100:
        printf("you are over weight");
    return 0;
    }
}
