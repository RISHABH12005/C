#include<stdio.h>
int main()
{
    float A=((1920*1080*24)/1024*1024);
    printf("No. of bit in one frame =%f\n",A);
    printf("Transfer time in second =%f\n",(100*A)/512);
    return 0;
}
