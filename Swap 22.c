#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int *,int *);
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d",a,b);    
    return 0;
}
 void swap(int *c,int *d)
 {int temp;
 temp=*c;
 *c=*d;
 *d=temp;}
