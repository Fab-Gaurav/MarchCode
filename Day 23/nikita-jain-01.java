/*
Input -> 5
         1 6 5 4 8

Output -> 3
          2
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int i,j,e_s=0,o_s=0;
        int[] ar=new int[n];
        for(i=0;i<n;i++)
        {
            ar[i]=scan.nextInt();
            if(ar[i]%2==0)
                e_s++;
            else
                o_s++;
        }
        System.out.println("Even elements = "+e_s);
        System.out.println("Odd elements = "+o_s);
    }
}