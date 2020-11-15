// Dog 클래스 설계
// 강아지의 이름, 종류, 나이를 표현하는 필드를 가진 Dog 클래스를 설계하고 테스트한다.
// 2017440018 김민호

class Dog {
	private String name;  	//강아지의 이름, 전용 멤버로 선언하였다.
	public String breed; 	//강아지의 종류, 공용 멤버로 선언하였다.
	private int age; 		//강아지의 나이, 전용 멤버로 선언하였다.
	
	public Dog(String name, int age) {
		this.name = name;	//입력변수 name의 값을 필드의 name에 초기화한다.
		this.breed = null;	//종류는 입력받지 않으므로 null로 초기화한다.
		this.age = age;		//입력변수 age의 값을 필드의 age에 초기화한다.
	}
	public Dog(String name, String breed, int age) {		//생성자의 입력변수의 개수를 다르게 하여 중복 메소드를 선언하였다.
		this.name = name;	//입력변수 name의 값을 필드의 name에 초기화한다.
		this.breed = breed;	//입력변수 breed의 값을 필드의 breed에 초기화한다.
		this.age = age;		//입력변수 age의 값을 필드의 age에 초기화한다.
	}
	
	public String toString() {
		return String.format("강아지의 이름: %s\n강아지의 종류: %s\n강아지의 나이: %d\n", this.name, this.breed, this.age);
	}
	
}


public class DogTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 김민호");
		
		Dog dog1 = new Dog("황구", 5);				//입력변수가 2개인 객체 dog1 선언
		System.out.println(dog1);					//breed가 입력되지 않은 상태에서 toString함수를 호출한다.

		Dog dog2 = new Dog("복실이", 7);				//입력변수가 2개인 객체 dog2 선언
		dog2.breed = "요크셔테리어";					//입력되지 않은 변수 breed를 입력 해 준다.
		System.out.println(dog2);					//dog1과 다르게 breed를 입력 한 뒤 toString함수를 호출한다.
		
		Dog dog3 = new Dog("백구", "포메라니안", 3);	//입력변수가 3개인 객체 dog3 선언
		System.out.println(dog3);					//dog3의 toString함수를 호출한다.
		
	}

}