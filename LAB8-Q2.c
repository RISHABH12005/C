#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the character :");
    scanf("%c",&ch);
    switch(ch)
    {
    case'a' ... 'z':
        printf("lower case");
        break;
    case'A' ... 'Z':
        printf("Upper case");
        break;
    case'0' ... '9':
        printf("Special case");
        break;
    default:
        printf("Enter the correct characters");
        return 0;
    }
}
