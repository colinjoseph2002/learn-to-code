#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, j,k;

   scanf("%d",&n);

   for(i = n; i >= 1; i--)
    {
      
      {for(k=n-1;k>=i;k--)
         printf(" ");
      for(j = 1; j <= i; j++)

      printf("%d",i);
      }

      printf("\n");
   }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
