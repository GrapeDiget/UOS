// Dog Ŭ���� ����
// �������� �̸�, ����, ���̸� ǥ���ϴ� �ʵ带 ���� Dog Ŭ������ �����ϰ� �׽�Ʈ�Ѵ�.
// 2017440018 ���ȣ

class Dog {
	private String name;  	//�������� �̸�, ���� ����� �����Ͽ���.
	public String breed; 	//�������� ����, ���� ����� �����Ͽ���.
	private int age; 		//�������� ����, ���� ����� �����Ͽ���.
	
	public Dog(String name, int age) {
		this.name = name;	//�Էº��� name�� ���� �ʵ��� name�� �ʱ�ȭ�Ѵ�.
		this.breed = null;	//������ �Է¹��� �����Ƿ� null�� �ʱ�ȭ�Ѵ�.
		this.age = age;		//�Էº��� age�� ���� �ʵ��� age�� �ʱ�ȭ�Ѵ�.
	}
	public Dog(String name, String breed, int age) {		//�������� �Էº����� ������ �ٸ��� �Ͽ� �ߺ� �޼ҵ带 �����Ͽ���.
		this.name = name;	//�Էº��� name�� ���� �ʵ��� name�� �ʱ�ȭ�Ѵ�.
		this.breed = breed;	//�Էº��� breed�� ���� �ʵ��� breed�� �ʱ�ȭ�Ѵ�.
		this.age = age;		//�Էº��� age�� ���� �ʵ��� age�� �ʱ�ȭ�Ѵ�.
	}
	
	public String toString() {
		return String.format("�������� �̸�: %s\n�������� ����: %s\n�������� ����: %d\n", this.name, this.breed, this.age);
	}
	
}


public class DogTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 ���ȣ");
		
		Dog dog1 = new Dog("Ȳ��", 5);				//�Էº����� 2���� ��ü dog1 ����
		System.out.println(dog1);					//breed�� �Էµ��� ���� ���¿��� toString�Լ��� ȣ���Ѵ�.

		Dog dog2 = new Dog("������", 7);				//�Էº����� 2���� ��ü dog2 ����
		dog2.breed = "��ũ���׸���";					//�Էµ��� ���� ���� breed�� �Է� �� �ش�.
		System.out.println(dog2);					//dog1�� �ٸ��� breed�� �Է� �� �� toString�Լ��� ȣ���Ѵ�.
		
		Dog dog3 = new Dog("�鱸", "���޶�Ͼ�", 3);	//�Էº����� 3���� ��ü dog3 ����
		System.out.println(dog3);					//dog3�� toString�Լ��� ȣ���Ѵ�.
		
	}

}