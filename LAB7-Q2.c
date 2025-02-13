#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            printf("leap year");
            else
            printf("non leap year");
        }
        else
        printf("non leap year");
    }
    else
    printf("leap year");
return 0;
}
