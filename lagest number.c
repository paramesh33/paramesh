#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
 printf("%d is the greatest number among three",a);
}
else if ((b>a)&&(b>c))
{
printf("%d is the greatest number among three",b);
}
else
printf("%d is the greatest number among three",c);
getch();
}
