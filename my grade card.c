#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  float d=(a+b+c)/(float)3;
  printf("%.2f\n",d);
  if(d<40)
   printf("F");
  else 
     if(d<60)
   printf("E");
     else 
         if(d<70)
         printf("D");
         else
            if(d<80)
            printf("C");
            else
                if(d<90)
                printf("B");
                else
                printf("A");
      

        
    return 0;
}
