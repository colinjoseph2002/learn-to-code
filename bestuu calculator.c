#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,d;
    float e;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&a);
    
        switch(a)
     {case 1:
      scanf("%d%d",&b,&c);
      d=b+c;
      printf("%d",d);
      break;
     case 2:
      scanf("%d%d",&b,&c);
      d=b-c;
      printf("%d",d);
     break;
     case 3:
     scanf("%d%d",&b,&c);
      d=b*c;
      printf("%d",d);
     break;
     case 4:
     {scanf("%d%d",&b,&c);
      if(c!=0)
      {e=b/(float)c;
      printf("%.1f",e);
      } 
     else
         printf("Cannot be determined");
     break;
    }
     }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
