import java.util.*;

public class MyMath<T> {
	private ArrayList<T> list = new ArrayList<T>();				//TŸ���� ArrayList��ü list
	
	public void add (T item) {
		list.add(item);											//add()�޼ҵ带 ���� list�� ���Ҹ� �߰��Ѵ�.
	}
	
	public double getAverage() {
		Iterator e = list.iterator();							//list�� ���ҿ� �ϳ��� �����ϱ� ���� �ݺ��� e
		double sum = 0.0;										//list�� ���ҵ��� ���� �����ϴ� ���� sum
		
		while(e.hasNext()) {										//�湮���� ���� ���Ұ� ������ ���� �ݺ�
			sum += Double.parseDouble((String.valueOf(e.next())));	//���Ҹ� ���ڿ��� ��ȯ�� �� double������ ��ȯ�Ͽ� sum�� ���Ѵ�.
		}
		
		return sum/list.size();									//sum�� list�� ũ�⸸ŭ ���� ��(���)�� ��ȯ�Ѵ�.
	}
	
	
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyMath<Integer> integerList = new MyMath<Integer>();	//¦���� �����ϴ� Integer Ÿ���� ArrayList��ü integerList 
		MyMath<Double> doubleList = new MyMath<Double>();		//Double Ÿ���� ArrayList��ü doubleList
		
		for(int i=1; i<=10; i++) {
			integerList.add(i*2);								//integerList�� 2���� 20������ ¦���� �����Ѵ�.
		}
		for(int i=1; i<=10; i++) {
			doubleList.add(i*0.1);								//doubleList�� 0.1���� 1���� 0.1 �������� 10���� �Ǽ��� �����Ѵ�.
		}
		
		System.out.println("integerList�� ���: " + integerList.getAverage());			//integerList�� ������ ����� ����Ѵ�.
		System.out.println("doubleList�� ���: " + doubleList.getAverage());			//doubleList�� ������ ����� ����Ѵ�.
		
	}

}
