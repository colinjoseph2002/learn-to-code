#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,j;
    scanf("%d",&a);
    if(a>0)
    { for(i=1;i<=a;i++)
    {for(j=1;j<=i;j++)
            printf("%d ",j);
     printf("\n");}
    }
    else
        printf("ERROR");
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
