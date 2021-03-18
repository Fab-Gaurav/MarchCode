import java.util.*;

public class JatinSaini664 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();

        int a=0, b=1, c=0;
        while(n-2>0){
            c=a+b;
            a=b;
            b=c;
            n--;
        }
        System.out.println(c+" ");
    }
}
