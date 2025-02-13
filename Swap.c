// Code of Swap the elements.
#include <stdio.h>
void swap(char*arr){
    char c;
    for (int i=0;arr[i]!='\0';i++){
        for (int j=i+1;arr[j]!='\0';j++){
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;
        }
    }
}
int main()
 {
    char arr[100];
    printf("Enter the name:");
    gets(arr);
    swap(arr);
    puts(arr);
}
