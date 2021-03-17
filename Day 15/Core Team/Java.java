import java.util.Scanner;

public class DayFifteen {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number : ");
		int number = sc.nextInt();
		
		int temp = number;
		
		int sumOfFactorial = 0;
		
		while(temp > 0) {
			sumOfFactorial += factorial(temp%10);
			temp /= 10;
		}
		
		if(sumOfFactorial == number && number != 0) {
			System.out.println(number+" is a Strong number");
		}else
			System.out.println(number+" is not a Strong number");
		
		
	}
	// function to find the factorial of a number
	public static int factorial(int n) {
		int result = 1;
		for(int i = n; i>0; i--) {
			result *= i;
		}
		return result;
	}
}
