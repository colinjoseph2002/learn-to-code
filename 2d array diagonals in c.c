#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10];
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    if(m==n)
        
    {for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {scanf("%d",&a[i][j]);
        }
         for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        {if(i==j)
         printf("%d ",a[i][j]);
        }
        }
         printf("\n");
        for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        
        {if((i+j)==(m-1))
             printf("%d ",a[i][j]);
        }
        }
     }
    else
        printf("ERROR");
     
          
         
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
