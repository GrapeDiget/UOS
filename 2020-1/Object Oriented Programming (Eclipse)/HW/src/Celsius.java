import java.util.Scanner;

public class Celsius {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		double celsius;
		double fahrenheit;
		
		System.out.print("ȭ�� �µ��� �Է��Ͻʽÿ�: ");
		
		Scanner input = new Scanner(System.in);
		
		fahrenheit = input.nextDouble();
		
		celsius = (fahrenheit-32)*5/9;
		
		System.out.print("�Է��Ͻ� ȭ�� �µ��� ���� ���� �µ�: ");
		System.out.println(celsius);
	}

}
