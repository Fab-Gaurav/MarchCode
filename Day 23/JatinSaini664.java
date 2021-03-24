import java.util.Scanner;

public class JatinSaini664 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();

        int[] a = new int[n];

        for(int i=0;i<n;i++){
            a[i]=scn.nextInt();
        }

        int odd=0, even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0)
                odd++;
            else
                even++;
        }
        System.out.println(odd+" "+even);
    }
}
