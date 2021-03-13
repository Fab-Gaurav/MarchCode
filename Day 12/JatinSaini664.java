import java.util.*;

public class JatinSaini664{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int m=scn.nextInt();

        for(int i=n;i<=m;i++){
            boolean isPrime=true;
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime)
                System.out.print(i+" ");
        }
    }
}