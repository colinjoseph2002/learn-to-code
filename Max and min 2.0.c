#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,max,min,n,b[10];
        scanf("%d", &n);
        for (i = 0; i < n; ++i)
            scanf("%d", &b[i]);
         max=b[0];
         min=b[0];
        for (i =1; i<n;++i) 
        { if(max<b[i])
            max=b[i];
        }
        for (i =1; i<n;++i) 
        { if(min>b[i])
           min=b[i];
        }
    
            
 
           
            printf("%d\n%d",min,max);
 
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
