// Book 클래스 설계
// 책에 관한 공통된 연산을 가지고 있는 수퍼클래스인 Book 클래스를 설계한다.
// 2017440018 김민호

abstract class Book {			//추상클래스인 수퍼클래스 Book를 선언한다. 
	protected String number;	//책의 관리번호 선언
	protected String title;		//책의 제목 선언
	protected String author;	//책의 저자 선언
	
	public abstract int getLateFees(int day);		//연체된 날짜에 따라 연체료를 계산하는 추상 메소드 선언
	
	public boolean equals(Object obj) {		//Object 클래스의 equals() 메소드를 재정의 하여 관리번호가 동일한지 판단하는 메소드 선언
		if(obj instanceof Book)
			return number.equals(((Book) obj).number);
		else
			return false;
	}
}

class Novel extends Book {								//소설책을 나타내는 서브클래스 Novel을 선언한다.
	public Novel(String num, String tit, String aut) {	//책의 정보를 입력받는 생성자함수
		this.number = num;		//입력변수 num의 값을 number에 초기화한다.
		this.title = tit;		//입력변수 tit의 값을 title에 초기화한다.
		this.author = aut;		//입력변수 aut의 값을 author에 초기화한다.
	}
	
	public int getLateFees(int day) {		//연체 일수를 매개변수로 받아 연체료를 반환한다.
		return 300*day;
	}
	public String toString() {
		return String.format("관리번호: " + number + " 책의 제목: " + title + " 저자: " + author);
	}
}

class Poet extends Book {								//시집을 나타내는 서브클래스 Poet을 선언한다.
	public Poet(String num, String tit, String aut) {	//책의 정보를 입력받는 생성자함수
		this.number = num;		//입력변수 num의 값을 number에 초기화한다.
		this.title = tit;		//입력변수 tit의 값을 title에 초기화한다.
		this.author = aut;		//입력변수 aut의 값을 author에 초기화한다.
	}
	
	public int getLateFees(int day) {		//연체 일수를 매개변수로 받아 연체료를 반환한다.
		return 200*day;
	}
	public String toString() {
		return String.format("관리번호: " + number + " 책의 제목: " + title + " 저자: " + author);
	}
}

class ScienceFiction extends Book {								//공상과학소설을 나타내는 서브클래스 ScienceFiction을 선언한다.
	public ScienceFiction(String num, String tit, String aut) {	//책의 정보를 입력받는 생성자함수
		this.number = num;		//입력변수 num의 값을 number에 초기화한다.
		this.title = tit;		//입력변수 tit의 값을 title에 초기화한다.
		this.author = aut;		//입력변수 aut의 값을 author에 초기화한다.
	}
	
	public int getLateFees(int day) {		//연체 일수를 매개변수로 받아 연체료를 반환한다.
		return 600*day;
	}
	public String toString() {
		return String.format("관리번호: " + number + " 책의 제목: " + title + " 저자: " + author);
	}
}
public class BookTest2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Novel a = new Novel("a001", "어린왕자", "생텍쥐페리");							//소설책 어린왕자를 매개변수 a로 선언한다.
		Poet b = new Poet("a001", "하늘과 바람과 별과 시", "윤동주");						//시집 하늘과 바람과 별과 시를 매개변수 b로 선언한다.
		ScienceFiction c = new ScienceFiction("c001", "쥬라기 공원", "마이클 크라이튼");	//공상과학소설 쥬라기 공원을 매개변수 c로 선언한다.
		
		System.out.println(a);		//a의 toString함수를 호출하여 정보를 출력한다.
		System.out.println(b);		//b의 toString함수를 호출하여 정보를 출력한다.
		System.out.println(c);		//c의 toString함수를 호출하여 정보를 출력한다.
		
		if(a.equals(b))		//a와 b의 관리번호가 같기때문에 두 책은 같은 책으로 간주된다.
			System.out.println("동일한 책 입니다.");
		else
			System.out.println("다른 책 입니다.");
		
		System.out.println("어린왕자를 5일 연체하였을 때 연체료는 " + a.getLateFees(5) + "원 입니다.");
		System.out.println("하늘과 바람과 별과 시를 7일 연체하였을 때 연체료는 " + b.getLateFees(7) + "원 입니다.");
		System.out.println("쥬라기 공원을 3일 연체하였을 때 연체료는 " + c.getLateFees(3) + "원 입니다.");
	}

}
