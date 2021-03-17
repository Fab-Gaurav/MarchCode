import java.util.*;

public class DaySixteen {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int b=n;
        int a=0;
        while(n!=0){
            a=a*10+n%10;
            n/=10;
        }
        if(a==b){
            System.out.println("Given Number is a palindromic Number");
        }else{
            System.out.println("Given Number is not a palindromic Number");
        }
    }
}
