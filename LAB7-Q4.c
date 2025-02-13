#include<stdio.h>
int main()
{
    int A;
    printf("Enter the the marks");
    scanf("%d",&A);
    if(A>=80)
    {
        printf("GRADE:O,OUTSTANDING");
    }
    else if(A>=72)
    {
        printf("GRADE:A+,EXCELLENT");
    }
    else if(A>=64)
    {
        printf("GRADE:A,VERY GOOD");
    }
    else if(A>=56)
    {
        printf("GRADE:B+,GOOD");
    }
    else if(A>=48)
    {
        printf("GRADE:B,AVERAGE");
    }
    else if(A>=40)
    {
        printf("GRADE:C,BELOW AVERAGE");
    }
    else if(A>=35)
    {
        printf("GRADE:P,PASS");
    }
    else if(A<35)
    {
        printf("GRADE:F,FAIL");
    }
    return 0;
}
