
public class Test {
	
	public <T> String a (T obj) {					//�Ű������� T Ÿ���� ��ü obj�� �޴´�.
		String name = obj.getClass().getName();		//���ڿ� name�� obj�� Ŭ���� �̸��� �ִ´�.
		return name;								//���ڿ� name�� ��ȯ�Ѵ�.
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Test test = new Test();						//TestŬ������ �׽�Ʈ �� ��ü test�� �����Ѵ�.
		int integer = 1;							//int�� ���� integer
		float flt = 2;								//float�� ���� flt
		
		System.out.println(test.a(integer));		//integer�� Ŭ���� �̸��� ȣ���Ѵ�
		System.out.println(test.a(flt));			//flt�� Ŭ���� �̸��� ȣ���Ѵ�
	}

}
