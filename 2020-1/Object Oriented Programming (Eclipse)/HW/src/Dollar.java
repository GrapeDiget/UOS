import java.util.Scanner;

public class Dollar {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int won;
		double exchangeRate = 1278.50;
		double dollar;
		
		System.out.print("ȯ���� ��ȭ�� �Է��ϼ���: ");
		
		Scanner input = new Scanner(System.in);
		
		won = input.nextInt();
		
		dollar = won/exchangeRate;
		
		System.out.print("�Է��� ��ȭ�� ȯ�����: ");
		System.out.println(dollar);
		
	}

}
