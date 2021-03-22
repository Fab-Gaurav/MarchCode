/*
Input -> 5

Output -> A
          BC
          DEF
          GHIJ
          KLMNO
*/



import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int i,j,k=65;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(k==91)
                    k=65;
                System.out.print((char)k);
                k++;
            }
            System.out.println();
        }
    }
}