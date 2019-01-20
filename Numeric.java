import java.util.*;
public class Numeric {

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String string =sc.newLine();
        boolean numeric = true;

        try {
            Double num = Double.parseDouble(string);
        } catch (NumberFormatException e) {
            numeric = false;
        }

        if(numeric)
            System.out.println(" Yes");
        else
            System.out.println(" No");
    }
}
