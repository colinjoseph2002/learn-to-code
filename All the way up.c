#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i,j,a,n,b[10];
        scanf("%d", &n);
        for (i = 0; i < n; ++i)
            scanf("%d", &b[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (b[i]>b[j]) 
                {
 
                    a=b[i];
                    b[i]=b[j];
                    b[j]=a;
 
                }
 
            }
 
        }
        for (i = 0; i < n; ++i)
            printf("%d ",b[i]);
 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
