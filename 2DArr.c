// Code of 2D Array.
#include <stdio.h>
int main() {
   int row,column;
   printf ("Enter the row:");
   scanf ("%d",&row);
   printf ("Enter the column:");
   scanf ("%d",&column);
   int arr[row][column];
   for (int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf ("Enter the number:");
           scanf ("%d",&arr[i][j]);}
   }
   for (int i=0;i<row;i++){
       for(int j=0;j<column;j++){
           printf ("%d",arr[i][j]);}
       printf ("\n");}
    return 0;
}
