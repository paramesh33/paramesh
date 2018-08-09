import java.util.*;

class Natural

{
 
 public static void main(String args[])
  {
   
   Scanner sc=new Scanner(System.in);

   System.out.println("enter the limit:");

   int a=sc.nextInt();
   
   int b=0;
    for(int i=0;i<=a;i++)
        {
      
          b=b+i;
    
         }
  
    System.out.println("the sum of "+a+" natural numbers is "+b); 

  }
   
}
