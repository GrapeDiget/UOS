import java.util.Scanner;

public class Salary {

	public static void main(String[] args) {
		// 연봉계산 프로그램

		int salary;		//월급
		int deposit;	//저축액
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("월급을 입력하세요: ");
		
		salary = input.nextInt();
		
		deposit = 10*12*salary;
		
		System.out.print(deposit);
		
	}

}
