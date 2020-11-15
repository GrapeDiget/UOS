import java.util.Scanner;

public class Celsius {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		double celsius;
		double fahrenheit;
		
		System.out.print("화씨 온도를 입력하십시오: ");
		
		Scanner input = new Scanner(System.in);
		
		fahrenheit = input.nextDouble();
		
		celsius = (fahrenheit-32)*5/9;
		
		System.out.print("입력하신 화씨 온도에 대한 섭씨 온도: ");
		System.out.println(celsius);
	}

}
