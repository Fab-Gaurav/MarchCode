import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
         System.out.println("Enter the numbers");
       int n = sc.nextInt();
       int m = sc.nextInt();
       int temp = 0;

        temp=n;
        n=m;
        m=temp;

        System.out.println("SWAPPED NUMBERS ARE=" + n+ " "+ m);
 }
         
}