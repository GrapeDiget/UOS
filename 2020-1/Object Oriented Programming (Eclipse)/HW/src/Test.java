
public class Test {
	
	public <T> String a (T obj) {					//매개변수로 T 타입의 객체 obj를 받는다.
		String name = obj.getClass().getName();		//문자열 name에 obj의 클래스 이름을 넣는다.
		return name;								//문자열 name을 반환한다.
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Test test = new Test();						//Test클래스를 테스트 할 객체 test를 선언한다.
		int integer = 1;							//int형 변수 integer
		float flt = 2;								//float형 변수 flt
		
		System.out.println(test.a(integer));		//integer의 클래스 이름을 호출한다
		System.out.println(test.a(flt));			//flt의 클래스 이름을 호출한다
	}

}
