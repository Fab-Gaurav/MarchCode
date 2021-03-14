import java.util.*;

public class JatinSaini664{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();

        int b=n, a1=n;
        int a=0, i=0;

        while(n!=0){
            i++;
            n/=10;
        }
        n=i;
        while(b!=0){
            a+=(int)Math.pow(b%10, n);
            b/=10;
        }
        if(a==a1)
            System.out.println("Given Number is Armstrong Number");
        else
            System.out.println("Given Number is Not an Armstrong Number");
    }
}