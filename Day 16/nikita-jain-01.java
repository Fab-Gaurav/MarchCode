/*
Input -> 145

Output -> 145 is not palindrome
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int num=scan.nextInt();
        int n=num;
        int temp=num;
        int sum=0,count=0,a,i;
        while(n!=0)
        {
            count++;
            n=n/10;
        }
        while(temp!=0)
        {
            int mul=1;
            a=temp%10;
            for(i=1;i<=count;i++)
                mul=mul*a;
            temp=temp/10;
            sum=sum+mul;
        }
        if(sum==num)
            System.out.print(num+" is palindrome");
        else
            System.out.print(num+" is not palindrome");
    }
}