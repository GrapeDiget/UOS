import java.util.Scanner;

public class Salary {

	public static void main(String[] args) {
		// ������� ���α׷�

		int salary;		//����
		int deposit;	//�����
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ �Է��ϼ���: ");
		
		salary = input.nextInt();
		
		deposit = 10*12*salary;
		
		System.out.print(deposit);
		
	}

}
