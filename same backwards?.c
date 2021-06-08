#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c=0,d;       
scanf("%d",&a);    
d=a;    
while(a>0)    
{    
b=a%10;    
c=(c*10)+b;    
a=a/10;    
}    
if(d==c)    
printf("Yes");    
else    
printf("No");  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
