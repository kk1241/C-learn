#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
     int x;
     scanf("%d", &x);
     int arr[x];

     for (int i = 0; i < x; i++){
          scanf("%d", &arr[i]);
     }
     int lastElement = arr[x - 1];
     
     int flag = 0;
     
     for (int j = 0; j < x - 1; j++){
          if(arr[j] < lastElement){
               printf("%d", arr[j]);
               flag = 1;
          }
     }
     if(!flag){
          printf("0");
     }

     
     return 0;
}