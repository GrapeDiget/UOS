import java.util.Scanner;

public class Weekday {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int year, month, day;
		int totalDays = 0;
		boolean leap;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("������ �Է��Ͻÿ�: ");
		year = sc.nextInt();
		System.out.print("���� �Է��Ͻÿ�: ");
		month = sc.nextInt();
		System.out.print("���� �Է��Ͻÿ�: ");
		day = sc.nextInt();
		
		leap = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ? true : false;
		
		totalDays += (year-1900)*365;
		totalDays += (year-1900)/4;
		
		while(true)
		{
			if(month == 1)	break;
			totalDays += 31;
			if(month == 2)	break;
			totalDays += leap ? 29 : 28;
			if(month == 3) 	break;
			totalDays += 31;
			if(month == 4) 	break;
			totalDays += 30;
			if(month == 5) 	break;
			totalDays += 31;
			if(month == 6) 	break;
			totalDays += 30;
			if(month == 7) 	break;
			totalDays += 31;
			if(month == 8) 	break;
			totalDays += 31;
			if(month == 9) 	break;
			totalDays += 30;
			if(month == 10)	break;
			totalDays += 31;
			if(month == 11)	break;
			totalDays += 30;
			if(month == 12)	break;
		}
		
		totalDays += day;
		
		switch((totalDays%7))
		{
		case 0:
			System.out.printf("%d�� %d�� %d���� ������Դϴ�.\n", year, month, day);
			break;
		case 1:
			System.out.printf("%d�� %d�� %d���� �Ͽ����Դϴ�.\n", year, month, day);
			break;
		case 2:
			System.out.printf("%d�� %d�� %d���� �������Դϴ�.\n", year, month, day);
			break;
		case 3:
			System.out.printf("%d�� %d�� %d���� ȭ�����Դϴ�.\n", year, month, day);
			break;
		case 4:
			System.out.printf("%d�� %d�� %d���� �������Դϴ�.\n", year, month, day);
			break;
		case 5:
			System.out.printf("%d�� %d�� %d���� ������Դϴ�.\n", year, month, day);
			break;
		case 6:
			System.out.printf("%d�� %d�� %d���� �ݿ����Դϴ�.\n", year, month, day);
			break;
		}
		
	}

}
