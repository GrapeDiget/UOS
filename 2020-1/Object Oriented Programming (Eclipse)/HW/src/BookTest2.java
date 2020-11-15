// Book Ŭ���� ����
// å�� ���� ����� ������ ������ �ִ� ����Ŭ������ Book Ŭ������ �����Ѵ�.
// 2017440018 ���ȣ

abstract class Book {			//�߻�Ŭ������ ����Ŭ���� Book�� �����Ѵ�. 
	protected String number;	//å�� ������ȣ ����
	protected String title;		//å�� ���� ����
	protected String author;	//å�� ���� ����
	
	public abstract int getLateFees(int day);		//��ü�� ��¥�� ���� ��ü�Ḧ ����ϴ� �߻� �޼ҵ� ����
	
	public boolean equals(Object obj) {		//Object Ŭ������ equals() �޼ҵ带 ������ �Ͽ� ������ȣ�� �������� �Ǵ��ϴ� �޼ҵ� ����
		if(obj instanceof Book)
			return number.equals(((Book) obj).number);
		else
			return false;
	}
}

class Novel extends Book {								//�Ҽ�å�� ��Ÿ���� ����Ŭ���� Novel�� �����Ѵ�.
	public Novel(String num, String tit, String aut) {	//å�� ������ �Է¹޴� �������Լ�
		this.number = num;		//�Էº��� num�� ���� number�� �ʱ�ȭ�Ѵ�.
		this.title = tit;		//�Էº��� tit�� ���� title�� �ʱ�ȭ�Ѵ�.
		this.author = aut;		//�Էº��� aut�� ���� author�� �ʱ�ȭ�Ѵ�.
	}
	
	public int getLateFees(int day) {		//��ü �ϼ��� �Ű������� �޾� ��ü�Ḧ ��ȯ�Ѵ�.
		return 300*day;
	}
	public String toString() {
		return String.format("������ȣ: " + number + " å�� ����: " + title + " ����: " + author);
	}
}

class Poet extends Book {								//������ ��Ÿ���� ����Ŭ���� Poet�� �����Ѵ�.
	public Poet(String num, String tit, String aut) {	//å�� ������ �Է¹޴� �������Լ�
		this.number = num;		//�Էº��� num�� ���� number�� �ʱ�ȭ�Ѵ�.
		this.title = tit;		//�Էº��� tit�� ���� title�� �ʱ�ȭ�Ѵ�.
		this.author = aut;		//�Էº��� aut�� ���� author�� �ʱ�ȭ�Ѵ�.
	}
	
	public int getLateFees(int day) {		//��ü �ϼ��� �Ű������� �޾� ��ü�Ḧ ��ȯ�Ѵ�.
		return 200*day;
	}
	public String toString() {
		return String.format("������ȣ: " + number + " å�� ����: " + title + " ����: " + author);
	}
}

class ScienceFiction extends Book {								//������мҼ��� ��Ÿ���� ����Ŭ���� ScienceFiction�� �����Ѵ�.
	public ScienceFiction(String num, String tit, String aut) {	//å�� ������ �Է¹޴� �������Լ�
		this.number = num;		//�Էº��� num�� ���� number�� �ʱ�ȭ�Ѵ�.
		this.title = tit;		//�Էº��� tit�� ���� title�� �ʱ�ȭ�Ѵ�.
		this.author = aut;		//�Էº��� aut�� ���� author�� �ʱ�ȭ�Ѵ�.
	}
	
	public int getLateFees(int day) {		//��ü �ϼ��� �Ű������� �޾� ��ü�Ḧ ��ȯ�Ѵ�.
		return 600*day;
	}
	public String toString() {
		return String.format("������ȣ: " + number + " å�� ����: " + title + " ����: " + author);
	}
}
public class BookTest2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Novel a = new Novel("a001", "�����", "�������丮");							//�Ҽ�å ����ڸ� �Ű����� a�� �����Ѵ�.
		Poet b = new Poet("a001", "�ϴð� �ٶ��� ���� ��", "������");						//���� �ϴð� �ٶ��� ���� �ø� �Ű����� b�� �����Ѵ�.
		ScienceFiction c = new ScienceFiction("c001", "���� ����", "����Ŭ ũ����ư");	//������мҼ� ���� ������ �Ű����� c�� �����Ѵ�.
		
		System.out.println(a);		//a�� toString�Լ��� ȣ���Ͽ� ������ ����Ѵ�.
		System.out.println(b);		//b�� toString�Լ��� ȣ���Ͽ� ������ ����Ѵ�.
		System.out.println(c);		//c�� toString�Լ��� ȣ���Ͽ� ������ ����Ѵ�.
		
		if(a.equals(b))		//a�� b�� ������ȣ�� ���⶧���� �� å�� ���� å���� ���ֵȴ�.
			System.out.println("������ å �Դϴ�.");
		else
			System.out.println("�ٸ� å �Դϴ�.");
		
		System.out.println("����ڸ� 5�� ��ü�Ͽ��� �� ��ü��� " + a.getLateFees(5) + "�� �Դϴ�.");
		System.out.println("�ϴð� �ٶ��� ���� �ø� 7�� ��ü�Ͽ��� �� ��ü��� " + b.getLateFees(7) + "�� �Դϴ�.");
		System.out.println("���� ������ 3�� ��ü�Ͽ��� �� ��ü��� " + c.getLateFees(3) + "�� �Դϴ�.");
	}

}
