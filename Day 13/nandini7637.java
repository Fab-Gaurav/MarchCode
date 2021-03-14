

import java.util.*;

public class nandini7637{
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
         System.out.println("Enter the number");
       int n = sc.nextInt();
        int a,rem,b=0,j,rev=0;
         a=n;
         j=n;
         while(a>0)
         {
             b++;
             a/=10;
         }
         while(n>0)
         {
             rem=n%10;
             rev+=Math.pow(rem,b);
             n/=10;
         }
         if(rev==j)
         System.out.println("Armstrong Number");
         else
         System.out.println("Not Armstrong");
         }
         
}