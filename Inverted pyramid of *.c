#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int i,j,a;
    scanf("%d",&a);

    if(a>0)
    {    for(i=1;i<=a;i++)
    {   for(j=1; j<i; j++)
        {
            printf("  ");
        }
        for(j=1;j<=(a*2-((2*i)-1)); j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    }
    else
        printf("ERROR");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
