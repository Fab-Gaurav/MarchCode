/*
Input -> 5

Output -> 0 1 1 2 3
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int a=0,b=1,i,sum=0;
        if(n==1)
            System.out.println(a);
        else if(n==2)
            System.out.println(a+" "+b);
        else
        {
            System.out.print(a+" "+b+" ");
            for(i=3;i<=n;i++)
            {
                sum=a+b;
                a=b;
                b=sum;
                System.out.print(sum+" ");
            }
        }
    }
}