#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i,a=1;
    scanf("%d",&i);
    if(i>=0)
      { for(int j=1;j<=i;j=j+1)
       {a=a*j;}
    printf("%d",a);
      }
      else
         printf("ERROR");
       



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
