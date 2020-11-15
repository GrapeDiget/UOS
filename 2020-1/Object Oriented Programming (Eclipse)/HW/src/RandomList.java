import java.util.*;

public class RandomList<T> {
	private ArrayList<T> list = new ArrayList<T>();				//T타입의 ArrayList객체 list
	private Random rand = new Random();							//난수 생성을 위한 객체 rand
	
	public void add (T item) {
		list.add(item);											//add()메소드를 통해 list에 원소를 추가한다.
	}
	
	public T select() {
		int randomValue = rand.nextInt(list.size());			//select()메소드가 호출 될 때마다 새로운 난수가 생성된다.
		return list.get(randomValue);							//난수에 해당하는 인덱스의 원소를 호출한다.
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		RandomList<Integer> integerList = new RandomList();		//짝수를 저장하는 Integer 타입의 ArrayList객체 integerList 
		for(int i=1; i<=10; i++) {
			integerList.add(i*2);								//integerList에 2부터 20까지의 짝수를 저장한다.
		}
		
		for(int i=0; i<10; i++) {
			System.out.println(integerList.select());			//integerList에서 랜덤하게 하나의 원소를 선택하여서 반환한다.
		}
	}
}