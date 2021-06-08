#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int side;
    float radius,base,height;
    scanf("%d%f%f%f",&side,&radius,&base,&height);
    int asq=side*side;
    float acir=3.14*radius*radius;
    float atri=0.5*base*height;
    printf("%d\n%.1f\n%.2f",asq,acir,atri);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
