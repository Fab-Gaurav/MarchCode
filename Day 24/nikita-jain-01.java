/*
Input -> 10
         9 3 6 1 6 8 4 2 3 8

Output -> 9 3 6 1 8 4 2
*/



import java.util.Scanner;
// Other imports go here
// Do NOT change the class name
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int i,j;
        int[] ar=new int[n];
        for(i=0;i<n;i++)
            ar[i]=scan.nextInt();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(ar[i]==ar[j])
                    ar[j]=-1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]!=-1)
                System.out.print(ar[i]+" ");
        }
    }
}