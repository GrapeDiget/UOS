import java.util.Scanner;

public class Fibonacci {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long a = 0, b = 1, c;
		int i, num;
		Scanner sc= new Scanner(System.in);
		
		System.out.print("��� ���� ����Ͻðڽ��ϱ�?: ");
		num= sc.nextInt();
		
		if(num<1)
		{
			System.out.println("�߸��� ���� �Է��ϼ˽��ϴ�.");
			return;
		}
		
		switch(num)
		{
		case 1:
			System.out.printf("%d", a);
			break;
		case 2:
			System.out.printf("%d %d", a, b);
			break;
		default:
			System.out.printf("%d %d ", a, b);
			
			for(i=2; i<= num-1; i++)
			{
				c=a+b;
				System.out.print(c+" ");
				a=b;
				b=c;
			}
			
		}
		
	}

}
