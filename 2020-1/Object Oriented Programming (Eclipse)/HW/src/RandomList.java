import java.util.*;

public class RandomList<T> {
	private ArrayList<T> list = new ArrayList<T>();				//TŸ���� ArrayList��ü list
	private Random rand = new Random();							//���� ������ ���� ��ü rand
	
	public void add (T item) {
		list.add(item);											//add()�޼ҵ带 ���� list�� ���Ҹ� �߰��Ѵ�.
	}
	
	public T select() {
		int randomValue = rand.nextInt(list.size());			//select()�޼ҵ尡 ȣ�� �� ������ ���ο� ������ �����ȴ�.
		return list.get(randomValue);							//������ �ش��ϴ� �ε����� ���Ҹ� ȣ���Ѵ�.
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		RandomList<Integer> integerList = new RandomList();		//¦���� �����ϴ� Integer Ÿ���� ArrayList��ü integerList 
		for(int i=1; i<=10; i++) {
			integerList.add(i*2);								//integerList�� 2���� 20������ ¦���� �����Ѵ�.
		}
		
		for(int i=0; i<10; i++) {
			System.out.println(integerList.select());			//integerList���� �����ϰ� �ϳ��� ���Ҹ� �����Ͽ��� ��ȯ�Ѵ�.
		}
	}
}