#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10];
    int i,j,m,n,x,temp=0;
    scanf("%d%d",&m,&n);
   
        
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {scanf("%d",&a[i][j]);
        }
    scanf("%d",&x);
         for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        {if(x==a[i][j])
        {printf("Element found at (%d,%d)\n",i,j);
         temp=1;
        }
        }
        }
        if(temp==0)
         printf("Element not found");
     
   
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
