#include<stdio.h>
int main()
{
    char ch; scanf("%c",&ch);
    if(ch>='e')
    if(ch<='t')
    printf("In the range\n");
    else
    printf("Out of range\n");
    else
    printf("Out of range\n");
    (ch>='e')?(ch<='t')?printf("in the range\n"):printf("Out of range\n"):printf("Out of range\n");
    return 0;
}
