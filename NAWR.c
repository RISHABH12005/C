// Code of Not Argument With Return.
#include <stdio.h>
int sum(){
    int x,y;
    printf ("Enter the number:");
    scanf ("%d",&x);
    printf ("Enter the number:");
    scanf ("%d",&y);
    int c=x+y;
    return c;
}
int main() {
  int x;
  x=sum();
  printf ("%d",x);
    return 0;
}
