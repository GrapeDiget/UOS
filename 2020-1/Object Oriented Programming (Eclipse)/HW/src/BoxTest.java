// Box Ŭ���� ����
// ������ ����, ��, ���� �׸��� ���ڰ� ����ִ��� ���θ� ��Ÿ���� �ʵ带 ���� Box Ŭ������ �����ϰ� �׽�Ʈ�Ѵ�.
// 2017440018 ���ȣ

class Box {
	private double height;				//������ ����, ���� ������ �����Ͽ���.
	private double width;				//������ ��, ���� ������ �����Ͽ���.
	private double length;				//������ ����, ���� ������ �����Ͽ���.
	private boolean empty = true;		//���ڰ� ����ִ����� ����, ���� ������ �����Ͽ����� �ʱⰪ true�� ������.
	
	public Box() {};											//�����͸� ���� �ʴ� ������
	public Box(double height, double width, double length) {	//�����͸� 3���� �޴� ������
		this.height = height;
		this.width = width;
		this.length = length;
	}
	public Box(double height, double width, double length, boolean empty) {		//�����͸� ��� �޴� ������
		this.height = height;
		this.width = width;
		this.length = length;
		this.empty = empty;
	}	
		
	public String toString() {			//��ü�� ����� ������ ��ȯ�ϴ� toString�Լ��� �����Ѵ�.
		return String.format("������ ����: %f\n������ ��: %f\n������ ����: %f", this.height, this.width, this.length);
	}
	
	public void isEmpty() {
		if(this.empty==true) System.out.println("���ڰ� ����ֽ��ϴ�.");
		else System.out.println("���ڰ� ������� �ʽ��ϴ�.");		
	}
}


public class BoxTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 ���ȣ");
		
		Box box1 = new Box(10.0, 10.0, 10.0);		//�����͸� 3�� �Է��Ͽ� ��ü box1�� �����Ѵ�.
		System.out.println(box1);					//box1�� �����͸� ����Ѵ�.
		box1.isEmpty();								//box1�� ����ִ��� ���θ� Ȯ���Ѵ�.
		
		System.out.println();
		
		Box box2 = new Box(15.0, 20.0, 25.0, false);	//�����͸� ��� �Է��Ͽ� ��ü box2�� �����Ѵ�.
		System.out.println(box2);						//box2�� �����͸� ����Ѵ�.
		box2.isEmpty();									//box2�� ����ִ��� ���θ� Ȯ���Ѵ�.
		
		System.out.println();
		
		Box box3 = new Box();						//�����͸� �ϳ��� �Է����� �ʰ� ��ü box3�� �����Ѵ�.
		System.out.println(box3);					//box3�� �����͸� ����Ѵ�.		
		box3.isEmpty();								//box3�� ����ִ��� ���θ� Ȯ���Ѵ�.
	}

}