#include<stdio.h>
#include<conio.h>
int main()
{
int year;
clrscr();
printf("\n Enter YEAR ");
scanf("%d",&year);
if((year % 100) == 0)
{
  if((year % 400) == 0)
   {
    printf("\n Year %d is LEAP ",year);
   }
  else
   {
    printf("\n Year %d is NOT LEAP ",year);
   }
}
else
{
  if((year % 4) == 0)
  {
   printf("\n Year %d is LEAP ",year);
  }
  else
  {
   printf("\n Year %d is NOT LEAP ",year);
  }
}
getch();
return 0;

}
