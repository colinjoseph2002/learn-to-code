#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int factorial(int n)
{ if(n>=1)
    return n*factorial(n-1);
 else
     return 1;
}
    

int main() {
    int n;
    scanf("%d",&n);
    if(n>=0)
        printf("%d",factorial(n));
     else
         printf("ERROR");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
