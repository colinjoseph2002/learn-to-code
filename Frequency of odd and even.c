#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[1000],i,n;  
    int eve=0,odd=0;
     
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {if(a[i]%2==0)
     eve++;
     else
     odd++;
    }
     printf("%d\n%d",eve,odd);
 
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
