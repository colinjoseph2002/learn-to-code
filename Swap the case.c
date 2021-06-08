#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      char a[100];
    int i=0;  
    
   gets(a);

   while(a[i]!='\0')
   {if(a[i]>='a'&&a[i]<='z')
       a[i]=a[i]-32;
    else
        if(a[i]>='A'&&a[i]<='Z')
       a[i]=a[i]+32;
    i++;
   }
    puts(a);
   
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
