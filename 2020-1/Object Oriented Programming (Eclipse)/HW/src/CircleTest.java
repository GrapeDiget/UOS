// Circle Ŭ���� ����
// �������� ���� �߽��� ��ǥ�� ������ Ŭ���� Circle�� �����ϰ� ���� ���̸� ��ȯ�ϴ� �޼ҵ带 ���Խ�Ų��.
// 2017440018 ���ȣ

class Circle {
	private double r, cx, cy; //������ r, �߽��� ��ǥ cx, cy ����
	
	public void setR(double r) 	{this.r=r;}   			//r�� ������
	public double getR() 		{return r;}		  		//r�� ������
	
	public void setCx(double x)	{this.cx=x;} 			//cx�� ������
	public double getCx()		{return cx;}		  	//cx�� ������
	
	public void setCy(double y) {this.cy=y;} 			//cy�� ������
	public double getCy() 		{return cy;}	      	//cy�� ������
	
	public double area() {								//���� ���̸� ��ȯ�Ѵ�.
		return r*r*3.14;
	}
	
}



public class CircleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 ���ȣ");
		
		Circle c = new Circle();						//Circle�� ��ü���� c����
		
		c.setCx(5.0);									//�����ڸ� ���� cx�Է�
		c.setCy(8.0);									//�����ڸ� ���� cy�Է�
		c.setR(7);										//�����ڸ� ���� r �Է�
		
		System.out.println("���� ���̴� " + c.area());		//���� ���� ���
	}

}
