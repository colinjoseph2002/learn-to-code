#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i=0;
    for(i=1;i<=100;i=i+1)
    {
        if(i%3!=0&&i%5!=0)
            printf("%d ",i);
            else
                 if(i%15==0)
                    printf("FIZZBUZZ ");
                else
                     if(i%3==0)
                      printf("FIZZ ");
                       else
                        printf("BUZZ ");
    }                  

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
