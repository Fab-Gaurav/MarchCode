/*
Input -> 145

Output -> 145 is strong number
*/


import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int num=scan.nextInt();
        int temp=num;
        int i,count=0,a;
        while(temp!=0)
        {
            int mul=1;
            a=temp%10;
            for(i=1;i<=a;i++)
                mul=mul*i;
            count=count+mul;
            temp=temp/10;
        }
        if(count==num)
            System.out.print(num+" is strong number");
        else
            System.out.print(num+" is not strong number");
    }
}