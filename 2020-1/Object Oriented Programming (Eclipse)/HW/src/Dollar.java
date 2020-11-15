import java.util.Scanner;

public class Dollar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int won;
		double exchangeRate = 1278.50;
		double dollar;
		
		System.out.print("환전할 원화를 입력하세요: ");
		
		Scanner input = new Scanner(System.in);
		
		won = input.nextInt();
		
		dollar = won/exchangeRate;
		
		System.out.print("입력한 원화의 환전결과: ");
		System.out.println(dollar);
		
	}

}
