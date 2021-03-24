import java.util.Scanner;

public class DayTwentyThree {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of array: ");
		int n = sc.nextInt();
		System.out.println("Enter the elements of array: ");
		int arr[] = new int[n];
		
		for(int i = 0 ; i<n ; i++) {
			arr[i] = sc.nextInt();
		}
		
		int even = 0;
		
		for(int i = 0 ; i<n ; i++) {
			if(arr[i] %2 == 0) {
				even++;
			}
		}
		int odd = arr.length - even;
		System.out.println("Even: "+even);
		System.out.println("Odd: "+odd);
		
		sc.close();
		
	}
}