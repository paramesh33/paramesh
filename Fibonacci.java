import java.util.*;
class Fibonacci
 {
   public static void main(String args[])
    {
 
      int b=1,a=0,c,n;
      Scanner sc=new Scanner(System.in);
       System.out.println("INPUT:");
       n=sc.nextInt();
      System.out.print(b+" ");
      c=a+b;
      for(int i=1;i<n;i++)
         {
         System.out.print(c+" ");
         a=b;
        b=c;
         c=a+b;
         }
      sc.close();
     }
}
