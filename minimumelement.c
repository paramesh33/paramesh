#include<stdio.h>
#include<conio.h>
int main()
{
  int n,b,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
     scanf("%d",&a[i]);
   }
   b=a[0];
   for(i=1;i<n;i++)
   {
     if(b>a[i])
       {
          b=a[i];
        }
     }
     printf("%d",b);
     return 0;
     }
     
   
