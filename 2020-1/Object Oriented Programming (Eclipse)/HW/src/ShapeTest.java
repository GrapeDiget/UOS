// Shape 클래스 설계
// 도형에 관한 공통된 연산을 가지고 있는 수퍼클래스인 Shape를 설계한다.
// 2017440018 김민호

abstract class Shape {			//추상클래스인 수퍼클래스 Shape를 선언한다.
	private String color;		//도형의 색상 선언
	
	public abstract double calcArea();	//도형의 면적을 반환하는 추상 메소드 선언
	
	public String toString() {
		return String.format("도형입니다.");
	}
}

class Rectangle extends Shape {	//사각형을 나타내는 서브클래스 Rectangle을 선언한다.
	private double length;		//사각형의 길이 선언
	private double width;		//사각형의 너비 선언
	
	public Rectangle(double len, double wid) {	//사각형의 정보를 입력받는 생성자함수
		this.length = len;	//입력변수 len의 값을 필드의 length에 초기화한다.
		this.width = wid;	//입력변수 wid의 값을 필드의 width에 초기화한다.
	}
	
	public double calcArea() {
		return length*width;	//사각형의 넓이를 계산하여 반환한다.
	}
	
	public String toString() {
		return String.format("사각형입니다.");
	}
}

class Triangle extends Shape {	//삼각형을 나타내는 서브클래스 Rectangle을 선언한다.
	private double base;		//삼각형의 밑변의 길이 선언
	private double height;		//삼각형의 높이 선언
	
	public Triangle(double base, double height) {	//삼각형의 정보를 입력받는 생성자함수
		this.base = base;		//입력변수 base의 값을 필드의 base에 초기화한다.
		this.height = height;	//입력변수 height의 값을 필드의 height에 초기화한다.
	}
	
	public double calcArea() {
		return base*height*0.5;	//삼각형의 넓이를 계산하여 반환한다.
	}
	
	public String toString() {
		return String.format("삼각형입니다.");
	}
}
public class ShapeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle a = new Rectangle(4.0, 2.0);		//Rectangle의 객체변수 a 선언과 함께 생성자를 통해 사각형의 길이와 너비를 지정해 준다.
		Triangle b = new Triangle(5.0, 3.0);		//Triangle의 객체변수 b 선언과 함게 생성자를 통해 삼각형의 밑변의 길이와 높이를 지정해 준다.
		
		System.out.println(a);								//a의 toString함수 호출
		System.out.println("사각형의 넓이: "+ a.calcArea());	//a의 calcArea함수를 통해 사각형의 넓이를 출력한다.
		System.out.println(b);								//b의 toString함수 호출
		System.out.println("삼각형의 넓이: "+ b.calcArea());	//b의 calcArea함수를 통해 삼각형의 넓이를 출력한다.
	}

}
