#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],i,n,b,temp=0;  
 
     
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    scanf("%d",&b);
    
    for(i=0;i<n;i++)
        if(a[i]==b)
            temp=1;
    
    if(temp==1)
        printf("%d is present in this array",b);
    else
        printf("%d is not present in this array",b);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
