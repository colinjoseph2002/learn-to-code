#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int n;
  do
  {printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
  scanf("%d",&n);
  switch(n)
  {case 1:
  {for(int i=1;i<11;i++)
  {printf("%d ",i*n);}
 
  break;
  } 
  case 2:
  {for(int i=1;i<11;i++)
  {printf("%d ",i*n);}
  
  break;
  }
  case 3:
  {for(int i=1;i<11;i++)
  {printf("%d ",i*n);}
 
  break;
  } 
  case 4:
  {for(int i=1;i<11;i++)
  {printf("%d ",i*n);}
  
  break;
  } 
  case 5:
  {for(int i=1;i<11;i++)
  {printf("%d ",i*n);}

  break;
  }  
  case 6:
  break;
  default :
  printf("Enter a valid option!");
  }
  }
  while(n!=6);
  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
