// Box 클래스 설계
// 상자의 높이, 폭, 길이 그리고 상자가 비어있는지 여부를 나타내는 필드를 가진 Box 클래스를 설계하고 테스트한다.
// 2017440018 김민호

class Box {
	private double height;				//상자의 높이, 전용 변수로 선언하였다.
	private double width;				//상자의 폭, 전용 변수로 선언하였다.
	private double length;				//상자의 길이, 전용 변수로 선언하였다.
	private boolean empty = true;		//상자가 비어있는지의 여부, 전용 변수로 선언하였으며 초기값 true를 가진다.
	
	public Box() {};											//데이터를 받지 않는 생성자
	public Box(double height, double width, double length) {	//데이터를 3개를 받는 생성자
		this.height = height;
		this.width = width;
		this.length = length;
	}
	public Box(double height, double width, double length, boolean empty) {		//데이터를 모두 받는 생성자
		this.height = height;
		this.width = width;
		this.length = length;
		this.empty = empty;
	}	
		
	public String toString() {			//객체에 저장된 정보를 반환하는 toString함수를 정의한다.
		return String.format("상자의 높이: %f\n상자의 폭: %f\n상자의 길이: %f", this.height, this.width, this.length);
	}
	
	public void isEmpty() {
		if(this.empty==true) System.out.println("상자가 비어있습니다.");
		else System.out.println("상자가 비어있지 않습니다.");		
	}
}


public class BoxTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 김민호");
		
		Box box1 = new Box(10.0, 10.0, 10.0);		//데이터를 3개 입력하여 객체 box1을 선언한다.
		System.out.println(box1);					//box1의 데이터를 출력한다.
		box1.isEmpty();								//box1이 비어있는지 여부를 확인한다.
		
		System.out.println();
		
		Box box2 = new Box(15.0, 20.0, 25.0, false);	//데이터를 모두 입력하여 객체 box2를 선언한다.
		System.out.println(box2);						//box2의 데이터를 출력한다.
		box2.isEmpty();									//box2가 비어있는지 여부를 확인한다.
		
		System.out.println();
		
		Box box3 = new Box();						//데이터를 하나도 입력하지 않고 객체 box3를 선언한다.
		System.out.println(box3);					//box3의 데이터를 출력한다.		
		box3.isEmpty();								//box3가 비어있는지 여부를 확인한다.
	}

}