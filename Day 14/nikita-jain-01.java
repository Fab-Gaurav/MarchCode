/*
Input -> 6

Output -> 6 is a perfect no
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int no=scan.nextInt();
        int temp=no;
        int sum=0,i;
        for(i=1;i<temp;i++)
        {
            if(temp%i==0)
                sum=sum+i;
        }
        if(sum==no)
            System.out.print(no+" is a perfect no");
        else
            System.out.print(no+" is not a perfect no");
    }
}