import java.util.Scanner;

public class JatinSaini664 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int m = scn.nextInt();

        int[] a = new int[n];
        int[] b = new int[m];

        for(int i=0;i<n;i++){
            a[i]=scn.nextInt();
        }
        for(int i=0;i<m;i++){
            b[i]=scn.nextInt();
        }
    
        int[] c = new int[n+m];

        int k=0;
    
        for(int i=0;i<n;i++){
            c[k]=a[i];
            k++;
        }
    
        for(int i=0;i<m;i++){
            c[k]=b[i];
            k++;
        }
    
        for(int i=0;i<n+m;i++){
            System.out.print(c[i]+" ");
        }
    }
}
