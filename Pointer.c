// Code of the Pattern.
#include <stdio.h>
void swap (int*x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
int main() {
    int x=4,y=5;
    swap(&x,&y);
    printf ("%d %d",x,y);
    return 0;
}
