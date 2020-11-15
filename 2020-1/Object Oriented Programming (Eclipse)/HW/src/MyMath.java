import java.util.*;

public class MyMath<T> {
	private ArrayList<T> list = new ArrayList<T>();				//T타입의 ArrayList객체 list
	
	public void add (T item) {
		list.add(item);											//add()메소드를 통해 list에 원소를 추가한다.
	}
	
	public double getAverage() {
		Iterator e = list.iterator();							//list의 원소에 하나씩 접근하기 위한 반복자 e
		double sum = 0.0;										//list의 원소들의 합을 저장하는 변수 sum
		
		while(e.hasNext()) {										//방문하지 않은 원소가 없을때 까지 반복
			sum += Double.parseDouble((String.valueOf(e.next())));	//원소를 문자열로 변환한 후 double형으로 변환하여 sum에 더한다.
		}
		
		return sum/list.size();									//sum을 list의 크기만큼 나눈 값(평균)을 반환한다.
	}
	
	
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyMath<Integer> integerList = new MyMath<Integer>();	//짝수를 저장하는 Integer 타입의 ArrayList객체 integerList 
		MyMath<Double> doubleList = new MyMath<Double>();		//Double 타입의 ArrayList객체 doubleList
		
		for(int i=1; i<=10; i++) {
			integerList.add(i*2);								//integerList에 2부터 20까지의 짝수를 저장한다.
		}
		for(int i=1; i<=10; i++) {
			doubleList.add(i*0.1);								//doubleList에 0.1부터 1까지 0.1 간격으로 10개의 실수를 저장한다.
		}
		
		System.out.println("integerList의 평균: " + integerList.getAverage());			//integerList의 값들의 평균을 출력한다.
		System.out.println("doubleList의 평균: " + doubleList.getAverage());			//doubleList의 값들의 평균을 출력한다.
		
	}

}
