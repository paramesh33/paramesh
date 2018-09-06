import java.util.*;
class Maximum
 {
   public static void main(String args[])
    {
      int c[]=new int[5];
      int b;
      Scanner sc=new Scanner(System.in);
       System.out.println("INPUT:");
      for(int i=0;i<c.length;i++)
         {
           c[i]=sc.nextInt();
          }
         }
        b=c[0];
      for(int i=0;i<c.length;i++)
         {
           if(c[i]>b)
            {
             b=c[i];
             }
         }
      System.out.println("OUTPUT: "+b);
      sc.close();
     }
}
