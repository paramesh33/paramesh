#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter the value of a");
 scanf("%d",&a);
 if(a<0)
  {
    printf("%d is a negative number",a);
   }
  else if(a>0)
   {
    printf("%d is a positive number",a);
   }
  else
   printf("the number is zero");
   getch();
   }
