class Rectangle {
	int w;
	int h;
	
	int area()
	{
		return w*h;
	}
	
	int perimeter()
	{
		return 2*(w+h);
	}
}




public class RectangleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Rectangle r1 = new Rectangle();
		Rectangle r2 = new Rectangle();
		
		r1.w = 10;
		r1.h = 20;		
		System.out.println("면적: " + r1.area());
		System.out.println("둘레: " + r1.perimeter());
		
		r2.w = 30;
		r2.h = 50;
		System.out.println("면적: " + r2.area());
		System.out.println("둘레: " + r2.perimeter());
		
	}

}
