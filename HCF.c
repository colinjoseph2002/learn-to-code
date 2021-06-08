#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    while(b!=0)
    {c=b;
     b=a%b;
     a=c;
    }
    printf("%d",a);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
