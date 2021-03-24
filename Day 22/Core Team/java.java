import java.util.Scanner;

public class DayTwentyTwo {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		

		
		int arr[] = {1,2,3,4,5,6,7,8,10};
		
		
		int max = Integer.MIN_VALUE;
		int min = Integer.MAX_VALUE;
		
		System.out.println("Enter the numbers of array:");
		
		for(int i = 0 ; i<arr.length ; i++) {
		
			max = Math.max(max, arr[i]);
			min = Math.min(min, arr[i]);
		}
		
		System.out.println("Max: "+max);
		System.out.println("Min: "+min);
		
	}
}