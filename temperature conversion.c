#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float fah;
    scanf("%f",&fah);
    float cel=(fah-32)*5/9;
    printf("%.2f",cel);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
