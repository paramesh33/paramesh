import java.util.*;
class Numberofdigits
 {
   public static void main(String args[])
    {
        int count=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the values");
        int a=sc.nextInt();
        while(a!=0)
          {
            a=a/10;
            count++;
            }
          System.out.println("Number of digits is "+count);
    }
 }
