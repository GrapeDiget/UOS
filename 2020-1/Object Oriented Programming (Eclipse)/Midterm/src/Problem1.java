import java.util.Scanner;

class Person {
	protected String name;							//사람의 이름
	protected String age;							//사람의 나이
	protected String address;						//사람의 주소
}

class Student extends Person {						//Student is a Person이므로 상속관계이다.
	private String school;							//학생의 학교
	private String major;							//학생의 학과
	private String classNumber;						//학생의 학번
	
	private double[] point = new double[8];			//8학기 평균평점을 저장하는 배열
	
	public double[] getPoint() {return point;}					//point의 접근자
	public void setPoint(double[] point) {this.point = point;}	//point의 설정자
	
	//이름, 나이, 주소, 학교, 학과, 학번을 한 번에 입력하는 생성자함수
	public Student(String name, String age, String address, String school, String major, String classNumber) {
		super.name = name;
		super.age = age;
		super.address = address;
		this.school = school;
		this.major = major;
		this.classNumber = classNumber;
	}
	
	//8학기 평균평점의 평균을 반환하는 메소드
	public double average() {
		double sum = 0;
		for(int i=0; i<5; i++) {
			sum += getPoint()[i];
		}
		return sum/8;
	}
	
	//8학기 평균평점 중 최고평점을 반환하는 메소드
	public double maxGrade() {
		double max=0;
		for(int i=0; i<8; i++) {
			if(max < getPoint()[i]) {
				max = getPoint()[i];
			}
		}
		return max;	
	}
	
	//8학기 평균평점 중 최저평점을 반환하는 메소드
	public double minGrade() {
		double min=10;
		for(int i=0; i<8; i++) {
			if(min > getPoint()[i]) {
				min = getPoint()[i];
			}
		}
		return min;
	}
	
	//학생의 인적사항을 출력하는 toString함수
	public String toString() {
		return String.format(super.name + " (소속: " + this.school + " " + this.major + ", 학번: " + this.classNumber + ")");
	}
}




public class Problem1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		
		//학생의 인적사항을 입력받는다
		System.out.print("이름: ");
		String name = input.nextLine();
		System.out.print("나이: ");
		String age = input.nextLine();
		System.out.print("주소: ");
		String address = input.nextLine();
		System.out.print("학교: ");
		String school = input.nextLine();
		System.out.print("학과: ");
		String major = input.nextLine();
		System.out.print("학번: ");
		String classNumber = input.nextLine();
		
		//Student 객체 s1에 정보를 입력한다
		Student s1 = new Student(name, age, address, school, major, classNumber);
		
		System.out.println("-------------------------");
		
		//8학기 학점을 입력받는다
		System.out.println("8학기 학점을 순서대로 입력하세요");
		for(int i=1; i<=8; i++) {
			System.out.print(i + "학기 학점 → ");
			s1.getPoint()[i-1] = input.nextDouble();
		}
		
		System.out.println("-------------------------");
		
		//인적사항, 최고학점, 최저학점, 평균평점을 출력한다.
		System.out.println(s1);
		System.out.println("학생의 8학기 동안 최고 학점은 " + s1.maxGrade() + ", 최저 학점은 " + s1.minGrade() + "임");
		System.out.println("총 평균 평점은 " + s1.average() + "점 입니다.");

	}

}
