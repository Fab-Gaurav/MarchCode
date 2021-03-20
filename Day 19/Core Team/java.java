import java.util.Scanner;

public class DayEighteen {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of rows: ");
		int row = sc.nextInt();
		System.out.println("Enter the number of columns: ");
		int col = sc.nextInt();
		
		if(row != col) {
			System.out.println("Number of rows and colums must be same in a matrix!");
		}else {
			int arr[][] = new int[row][col];
			
			for(int i = 0 ; i<row; i++) {
				for(int j = 0 ; j<col ; j++) {
					arr[i][j] = sc.nextInt();
				}
			}
			
			
			for(int i = 0 ; i<row; i++) {
				for(int j = 0; j<col; j++) {
					if(i>j) {
						System.out.print(arr[i][j]+" ");
					}else
						System.out.print("0 ");
				}System.out.println();
			}
			
		}
		
	}
}