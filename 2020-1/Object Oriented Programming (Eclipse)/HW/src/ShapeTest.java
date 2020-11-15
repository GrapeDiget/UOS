// Shape Ŭ���� ����
// ������ ���� ����� ������ ������ �ִ� ����Ŭ������ Shape�� �����Ѵ�.
// 2017440018 ���ȣ

abstract class Shape {			//�߻�Ŭ������ ����Ŭ���� Shape�� �����Ѵ�.
	private String color;		//������ ���� ����
	
	public abstract double calcArea();	//������ ������ ��ȯ�ϴ� �߻� �޼ҵ� ����
	
	public String toString() {
		return String.format("�����Դϴ�.");
	}
}

class Rectangle extends Shape {	//�簢���� ��Ÿ���� ����Ŭ���� Rectangle�� �����Ѵ�.
	private double length;		//�簢���� ���� ����
	private double width;		//�簢���� �ʺ� ����
	
	public Rectangle(double len, double wid) {	//�簢���� ������ �Է¹޴� �������Լ�
		this.length = len;	//�Էº��� len�� ���� �ʵ��� length�� �ʱ�ȭ�Ѵ�.
		this.width = wid;	//�Էº��� wid�� ���� �ʵ��� width�� �ʱ�ȭ�Ѵ�.
	}
	
	public double calcArea() {
		return length*width;	//�簢���� ���̸� ����Ͽ� ��ȯ�Ѵ�.
	}
	
	public String toString() {
		return String.format("�簢���Դϴ�.");
	}
}

class Triangle extends Shape {	//�ﰢ���� ��Ÿ���� ����Ŭ���� Rectangle�� �����Ѵ�.
	private double base;		//�ﰢ���� �غ��� ���� ����
	private double height;		//�ﰢ���� ���� ����
	
	public Triangle(double base, double height) {	//�ﰢ���� ������ �Է¹޴� �������Լ�
		this.base = base;		//�Էº��� base�� ���� �ʵ��� base�� �ʱ�ȭ�Ѵ�.
		this.height = height;	//�Էº��� height�� ���� �ʵ��� height�� �ʱ�ȭ�Ѵ�.
	}
	
	public double calcArea() {
		return base*height*0.5;	//�ﰢ���� ���̸� ����Ͽ� ��ȯ�Ѵ�.
	}
	
	public String toString() {
		return String.format("�ﰢ���Դϴ�.");
	}
}
public class ShapeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle a = new Rectangle(4.0, 2.0);		//Rectangle�� ��ü���� a ����� �Բ� �����ڸ� ���� �簢���� ���̿� �ʺ� ������ �ش�.
		Triangle b = new Triangle(5.0, 3.0);		//Triangle�� ��ü���� b ����� �԰� �����ڸ� ���� �ﰢ���� �غ��� ���̿� ���̸� ������ �ش�.
		
		System.out.println(a);								//a�� toString�Լ� ȣ��
		System.out.println("�簢���� ����: "+ a.calcArea());	//a�� calcArea�Լ��� ���� �簢���� ���̸� ����Ѵ�.
		System.out.println(b);								//b�� toString�Լ� ȣ��
		System.out.println("�ﰢ���� ����: "+ b.calcArea());	//b�� calcArea�Լ��� ���� �ﰢ���� ���̸� ����Ѵ�.
	}

}
