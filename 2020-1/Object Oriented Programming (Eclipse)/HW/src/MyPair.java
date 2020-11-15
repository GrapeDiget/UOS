
public class MyPair<T> {
	private T pair1;												//T타입의 객체 pair1
	private T pair2;												//T타입의 객체 pair2
	
	public MyPair (T pair1, T pair2) {								//MyPair의 생성자 메소드
		this.pair1 = pair1;
		this.pair2 = pair2;
	}

	public void setPair1 (T pair1) {this.pair1 = pair1;}			//pair1의 설정자
	public T getPair1() {return this.pair1;}						//pair1의 접근자
	
	public void setPair2 (T pair2) {this.pair2 = pair2;}			//pair2의 설정자
	public T getPair2() {return pair2;}								//pair2의 접근자
	
	public String toString() {										//MyPair의 toString() 메소드
		return String.format(pair1 + " " + pair2);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyPair<String> fruit = new MyPair<String>("사과", "포도");		//MyPair 클래스를 테스트한다.
		
		System.out.println(fruit);									//fruit의 toString() 호출
	}


}