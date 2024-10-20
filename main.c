#include <stdio.h>
#include <stdlib.h>

int main() {
     int x;
    scanf("%d", &x);
    int arr[x];
    for(int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < x; j++) {
        if(arr[j] % 2 == 0){
            printf("%d ", arr[j]);
        }
    }
     for (int m = 0; m < x; m++) {
        if(arr[m] % 2 != 0){
            printf("%d ", arr[m]);
        }
    }

    return 0;
}

