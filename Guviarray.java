import java.util.Scanner;
class Guviarray
 {
   public static void main(String args[])
    {
      Scanner sc=new Scanner(System.in);
      int c=0;
      int n=sc.nextInt();
      int p=sc.nextInt();
      int a[]=new int[n];
      for(int i=0;i<n;i++)
         {
               a[i]=sc.nextInt();
          }
       for(int i=0;i<p;i++)
         {
             c=c+a[i];
          }
       System.out.println(c);
  }
}
