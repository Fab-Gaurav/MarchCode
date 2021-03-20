import java.util.*;

public class JatinSaini664{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int m= scn.nextInt();

        int[][] a = new int[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j]=scn.nextInt();
            }
        }
    
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<m;j++){
                System.out.print(a[n-i-1][j]+" ");
            }
            System.out.println();
        }
    }
}