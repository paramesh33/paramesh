import java.util.*;
class Maxmin
 {
   public static void main(String args[])
    {
      int c[]=new int[5];
      int a;
      int b;
      Scanner sc=new Scanner(System.in);
      for(int i=0;i<c.length;i++)
         {
           System.out.println("enter the values");
           c[i]=sc.nextInt();
          }
        b=c[0];
      for(int i=0;i<c.length;i++)
         {
           if(c[i]>b)
            {
             b=c[i];
             }
         }
      System.out.println("maximum value is: "+b);
      sc.close();
     }
}
