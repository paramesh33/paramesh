import java.util.*;
class Powerofdigit
 {
   public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the digit:");
        int a=sc.nextInt();
        System.out.println("enter the digit:");
        int b=sc.nextInt();
        int c=a;
        for(int i=1;i<b;i++)
          {
            a=a*c;
            
            }
          System.out.println("Answer is "+a);
    }
 }
