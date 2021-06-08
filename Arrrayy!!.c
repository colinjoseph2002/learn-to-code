#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10]={10,25,8,14,3,23,1,0,12,9};
    printf("%d\n",a[3]);
    printf("%d\n",a[9]);
    a[2]=30;
    printf("%d\n",a[2]);
    for(int n=0;n<10;n++)
    printf("%d ",a[n]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
