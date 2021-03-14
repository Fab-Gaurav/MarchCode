
import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the numbers");
         int n = sc.nextInt();
         int m = sc.nextInt();
           int r=0;
           System.out.println("Prime numbers=");
         for(int i=n+1;i<m;i++)
         {
             for(int j=2;j<i;j++)
             {
                 if(i%j==0)
                 {
                     r++;
                     break;
                 }
             }
             if(r==0)
             System.out.println(i);
             r=0;
         }

}
}