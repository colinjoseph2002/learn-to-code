#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     char a[100],b;
    int i=0,temp;  
    
   gets(a);
   scanf("%c",&b);

   while(a[i]!='\0')
   {if(a[i]==b)
       {temp++;
        i++;}
    else
        i++;
   }
    printf("%d",temp);
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
