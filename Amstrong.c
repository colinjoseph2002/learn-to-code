#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,result = 0;
    scanf("%d", &a);
    b=a;

    while (b!= 0) {
       c=b%10;
        
       result+=c*c*c;

       b/= 10;
    }

    if (result ==a)
        printf("Amstrong");
    else
        printf("Not Amstrong");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
