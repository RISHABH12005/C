#include<stdio.h>
int main()
{
    int no;
    printf("enter the no :");
    scanf("%d",&no);
    if(no>=65&&no<=90)
    printf("capital latter");
    if(no>=97&&no<=122)
    printf("small latter");
    if(no>=48&&no<=57)
    printf("special character");
    return 0;
}
