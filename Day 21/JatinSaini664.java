import java.util.*;

public class JatinSaini664{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n  = scn.nextInt();

        int a=65;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(a==91)
                    a=65;
                System.out.print((char)(a)+" ");
                a++;
            }
            System.out.println();
        }
    }
}