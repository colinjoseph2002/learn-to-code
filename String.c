#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     char a[100],b[100];
    int count= 0, i;
    gets(a);
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]==' '&&a[i+1]!=' ')
            count++;    
    }
    printf("no of words = %d\n", count + 1);
    count=0;
    int begin,end;
    while (a[count]!='\0')
      count++;

   end=count-1;

   for(begin=0;begin<count;begin++)
   {
      b[begin]=a[end];
      end--;
   }

   b[begin]='\0';
    printf("%s",b);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
