
public class MyPair<T> {
	private T pair1;												//TŸ���� ��ü pair1
	private T pair2;												//TŸ���� ��ü pair2
	
	public MyPair (T pair1, T pair2) {								//MyPair�� ������ �޼ҵ�
		this.pair1 = pair1;
		this.pair2 = pair2;
	}

	public void setPair1 (T pair1) {this.pair1 = pair1;}			//pair1�� ������
	public T getPair1() {return this.pair1;}						//pair1�� ������
	
	public void setPair2 (T pair2) {this.pair2 = pair2;}			//pair2�� ������
	public T getPair2() {return pair2;}								//pair2�� ������
	
	public String toString() {										//MyPair�� toString() �޼ҵ�
		return String.format(pair1 + " " + pair2);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyPair<String> fruit = new MyPair<String>("���", "����");		//MyPair Ŭ������ �׽�Ʈ�Ѵ�.
		
		System.out.println(fruit);									//fruit�� toString() ȣ��
	}


}