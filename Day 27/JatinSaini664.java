import java.util.Scanner;

public class JatinSaini664 {
    public static int fact(int n){
        if(n==0||n==1)
            return 1;
        return fact(n-1)*n;
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        System.out.println(fact(n));
    }
}
