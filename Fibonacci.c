#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, a = 0, b = 1;
    int nextTerm = a + b;
    scanf("%d", &n);
    printf("%d %d ",a,b);

    for (i = 1; i <= n-2; ++i) 
    {
        printf("%d ", nextTerm);
        a = b;
        b = nextTerm;
        nextTerm = a + b;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
