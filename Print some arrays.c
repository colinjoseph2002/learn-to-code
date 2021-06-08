#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],i,n;  
 
     
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("Entered array: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d ", a[i]);
    }
    printf("\n%d",a[1]);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
