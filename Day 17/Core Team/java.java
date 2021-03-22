import java.util.Scanner;

class DaySeventeen{
	
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        int a=0,b=1,i,sum=0;
        if(n<=0)
            return;
        else if(n==1)
            System.out.println(a);
        else if(n==2)
            System.out.println(a+" "+b);
        else{
            System.out.print(a+" "+b+" ");
            
            for(i=3; i<=n; i++){
                sum=a+b;
                a=b;
                b=sum;
                System.out.print(sum+" ");
            }
        }
        sc.close();
    }
}