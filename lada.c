#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h> 
int main() {
srand(time(NULL));
  int k, a, b, chas, min;
    
    a = 3600;
    scanf("%d",&k);
    chas = k/a;
    printf ("%d", chas);
    
    b=60;
    min = k/b%b;
    printf (" %d",min);
            
    
  return 0;
}