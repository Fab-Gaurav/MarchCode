/*
Input -> 5
         5 6 8 4 2

Output -> Maximum element in array is 8
          Minimum element in array is 2
*/



import java.util.Scanner;
class Main
{
    public static void main(String[] args)
    {
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        int i,max,min;
        int[] ar=new int[n];
        max=Integer.MIN_VALUE;
        min=Integer.MAX_VALUE;
        for(i=0;i<n;i++)
            ar[i]=scan.nextInt();
        for(i=0;i<n;i++)
        {
            if(ar[i]>max)
                max=ar[i];
            if(ar[i]<min)
                min=ar[i];
        }
        System.out.println("Maximum element in array is "+max);
        System.out.println("Minimum element in array is "+min);
    }
}