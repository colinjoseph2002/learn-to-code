#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a<8&&a>0)
     {switch(a)
     {case 1:
    printf("Sunday");
      break;
    case 2:
    printf("Monday");
      break;
     case 3:
    printf("Tuesday");
      break;
     case 4:
    printf("Wednesday");
      break;
     case 5:
    printf("Thursday");
      break;
     case 6:
    printf("Friday");
      break;
     case 7:
    printf("Saturday");
      break;
     }
     }
    else
        printf("Error");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
