import java.util.*;

public class JatinSaini664 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int b=n;
        long sum=0;
        while(b!=0){
            int a=b%10;
            b/=10;
            int ans=1;
            for(int i=2;i<=a;i++){
                ans*=i;
            }
            sum+=(long)ans;
        }
        if(sum==(long)n){
            System.out.println("Given Number is a Strong Number");
        }else{
            System.out.println("Given number is not a Strong Number");
        }
    }
}
