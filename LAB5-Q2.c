#include<stdio.h>
int main()
{
    char str[20];
    int Age;
    float h;
    char g;
    printf("Name:\n");
    scanf("%s",&str);
    printf("Age:\n");
    scanf("%d",&Age);
    printf("Height :\n");
    scanf("%f",&h);
    printf("Gender:\n");
    fflush(stdin);
    scanf("%c",&g);
    return 0;
}
