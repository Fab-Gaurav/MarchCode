/*
Input -> 3 3
         1 2 3
         4 5 6
         7 8 9

Output -> 1 0 0
          4 5 0
          7 8 9
*/



import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int m=scan.nextInt();
        int n=scan.nextInt();
        int[][] ar=new int[m][n];
        int i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            ar[i][j]=scan.nextInt();
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i>=j)
                    System.out.print(ar[i][j]+" ");
                else
                    System.out.print("0 ");
            }
            System.out.println();
        }
    }
}