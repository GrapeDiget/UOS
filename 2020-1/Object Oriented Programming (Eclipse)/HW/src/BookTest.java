// Book 클래스 설계
// 제목과 저자를 나타내는 필드를 가지는 Book 클래스를 설계한다.
// 2017440018 김민호

class Book2 {
	private String title;  //제목 선언
	private String author; //저자 선언
	
	public void setTitle(String t) 	{this.title=t;}   			//title의 설정자
	public String getTitle() 		{return title;}		  		//title의 접근자
	
	public void setAuthor(String a)	{this.author=a;} 			//author의 설정자
	public String getAuthor()		{return author;}		  		//author의 접근자
	}



public class BookTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 김민호");
		
		Book2 b = new Book2();						//Book의 객체변수 b선언
		
		b.setTitle("어린 왕자");						//설정자를 통해 title입력
		b.setAuthor("생텍쥐페리");						//설정자를 통해 author입력
		
		System.out.println("책 제목은 " + b.getTitle());		//책의 제목 출력
		System.out.println("저자는 " + b.getAuthor());			//책의 저 출력
	}

}
