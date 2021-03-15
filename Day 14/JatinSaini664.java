import java.util.*;

public class JatinSaini664{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        long sum=(long)1;

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                sum+=(long)i;
                sum+=(long)(n/i);
            }
        }
        if(sum==(long)n){
            System.out.println("Given Number is perfect Number");        
        }else{
            System.out.println("Given Number is not a perfect Number");
        }

    }
}