import java.util.Scanner;
class Guviarray
 {
   public static void main(String args[])
    {
      Scanner sc=new Scanner(System.in);
      int c=0;
      System.out.println("enter the no of elements you want:");
      int n=sc.nextInt();
      System.out.println("enter the element upto which you want to add: ");
      int p=sc.nextInt();
      int a[]=new int[n];
      System.out.println("the values of array:");
      for(int i=0;i<n;i++)
         {
               System.out.println("enter the values");
               a[i]=sc.nextInt();
          }
       for(int i=0;i<p;i++)
         {
             c=c+a[i];
          }
       System.out.println("the sum of first "+p+" array elements is "+c);
  }
}
