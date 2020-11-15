// Circle 클래스 설계
// 반지름의 값과 중심의 좌표를 가지는 클래스 Circle을 설계하고 원의 넓이를 반환하는 메소드를 포함시킨다.
// 2017440018 김민호

class Circle {
	private double r, cx, cy; //반지름 r, 중심의 좌표 cx, cy 선언
	
	public void setR(double r) 	{this.r=r;}   			//r의 설정자
	public double getR() 		{return r;}		  		//r의 접근자
	
	public void setCx(double x)	{this.cx=x;} 			//cx의 설정자
	public double getCx()		{return cx;}		  	//cx의 접근자
	
	public void setCy(double y) {this.cy=y;} 			//cy의 설정자
	public double getCy() 		{return cy;}	      	//cy의 접근자
	
	public double area() {								//원의 넓이를 반환한다.
		return r*r*3.14;
	}
	
}



public class CircleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 김민호");
		
		Circle c = new Circle();						//Circle의 객체변수 c선언
		
		c.setCx(5.0);									//설정자를 통해 cx입력
		c.setCy(8.0);									//설정자를 통해 cy입력
		c.setR(7);										//설정자를 통해 r 입력
		
		System.out.println("원의 넓이는 " + c.area());		//원의 넓이 출력
	}

}
