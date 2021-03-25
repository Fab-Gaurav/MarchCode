import java.util.HashSet;
import java.util.Scanner;

public class DayTwentyFour {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of array :");
		int n = sc.nextInt();
		
		int arr[] = new int[n];
		System.out.println("Enter the elements of the array: ");
		for(int i = 0 ; i<n ; i++) {
			arr[i] = sc.nextInt();
		}
		
		HashSet<Integer> hs = new HashSet<>();
		
		System.out.println("Unique elements in the array are : ");
		for(int i = 0; i<n ; i++) {
			if(!hs.contains(arr[i])) {
				System.out.print(arr[i]+", ");
			}
			hs.add(arr[i]);
		}
		
	}

}