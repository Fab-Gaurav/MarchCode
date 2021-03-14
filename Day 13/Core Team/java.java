import java.util.Scanner;

public class DayThirteen {
	public static void main(String[] args) {
		Scanner sc  = new Scanner(System.in);
		
		System.out.println("Enter a number : ");
		int number = sc.nextInt();
		
		int tempNum = number;
		int n = 0;
		
		// To calculate the number of the digits of number.
		while(tempNum != 0) {
			tempNum /= 10;
			n++;
		}
		
		tempNum = number;
		int result = 0;
		

		while(tempNum != 0) {
			int remainder = tempNum % 10;
			result += Math.pow(remainder, n);	
			tempNum /= 10;
		}
		
		if(result == number ) {
			System.out.println(number+" is an Armstrong number.");
		}else {
			System.out.println(number+" is not an Armstrong number.");
		}
		
		sc.close();
		
	}
}