import java.util.Scanner;

public class JatinSaini664{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();

        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i]=scn.nextInt();
        }
        int mx=Integer.MIN_VALUE, mn=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]>mx)
                mx=a[i];
            else if(a[i]<mn)
                mn=a[i];
        }
        System.out.println(mx+" "+mn);
    }
}