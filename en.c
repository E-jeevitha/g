#include<stdio.h>
#include<string.h>
int main()
{
   char c[100],d[100];
   const char *a="code kata";
   const char *b='   ';
   int i,l,l1;
   l=strlen(a);
    for(i=0;i<l && a[i]>32;i++)
        {
            d[i]=a[i]+10;
            printf("%c",d[i]);
     
        }
     printf("\t");
      b= strchr(a, ' ') + 1;
     l1=strlen(b);
   for(i=0;i<l1;i++)
     {
      if(i==0 || i==3)
      {
          c[i]=b[i];
         
      }
     else if(i==1)
      {
          c[i]=b[i]+10;
      }
      else
      {
          c[i]=b[i]-16;
      }
       printf("%c",c[i]);
     }
       return 0;
}
