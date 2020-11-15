import java.util.Scanner;

public class Weekday {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int year, month, day;
		int totalDays = 0;
		boolean leap;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("연도를 입력하시오: ");
		year = sc.nextInt();
		System.out.print("월을 입력하시오: ");
		month = sc.nextInt();
		System.out.print("일을 입력하시오: ");
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
			System.out.printf("%d년 %d월 %d일은 토요일입니다.\n", year, month, day);
			break;
		case 1:
			System.out.printf("%d년 %d월 %d일은 일요일입니다.\n", year, month, day);
			break;
		case 2:
			System.out.printf("%d년 %d월 %d일은 월요일입니다.\n", year, month, day);
			break;
		case 3:
			System.out.printf("%d년 %d월 %d일은 화요일입니다.\n", year, month, day);
			break;
		case 4:
			System.out.printf("%d년 %d월 %d일은 수요일입니다.\n", year, month, day);
			break;
		case 5:
			System.out.printf("%d년 %d월 %d일은 목요일입니다.\n", year, month, day);
			break;
		case 6:
			System.out.printf("%d년 %d월 %d일은 금요일입니다.\n", year, month, day);
			break;
		}
		
	}

}
