// Code of 1D Array.
#include <stdio.h>
int main() {
  int x,sum=0;
  printf ("Enter the size of an array:");
  scanf ("%d",&x);
  int arr[x];
  for(int i=0;i<x;i++){
      printf ("Enter the number:");
      scanf ("%d",&arr[i]);
  }
  for(int i=0;i<x;i++){
      sum=sum+arr[i];
  }
  printf ("%d",sum);
  return 0;
}
