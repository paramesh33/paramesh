#include <stdio.h> 
void main() 
{ 
 int  d ; 
 clrscr() ;  
 scanf("%d", &d) ; 
 for(int i = 1 ; i <= 5 ; i++) 
 {
  if(i % d == 0) 
  {
   printf("%d\t", i) ; 
   }
 }
}
