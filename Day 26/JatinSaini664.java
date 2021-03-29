import java.util.*;

public class JatinSaini664{
    public static void swap(int a, int b){
        int c=a;
        a=b;
        b=c;
        System.out.println(a+" "+b);
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int a = scn.nextInt();

        int b = scn.nextInt();

        swap(a, b);
    }
}