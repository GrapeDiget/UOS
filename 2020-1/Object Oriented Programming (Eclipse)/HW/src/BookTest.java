// Book Ŭ���� ����
// ����� ���ڸ� ��Ÿ���� �ʵ带 ������ Book Ŭ������ �����Ѵ�.
// 2017440018 ���ȣ

class Book2 {
	private String title;  //���� ����
	private String author; //���� ����
	
	public void setTitle(String t) 	{this.title=t;}   			//title�� ������
	public String getTitle() 		{return title;}		  		//title�� ������
	
	public void setAuthor(String a)	{this.author=a;} 			//author�� ������
	public String getAuthor()		{return author;}		  		//author�� ������
	}



public class BookTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("2017440018 ���ȣ");
		
		Book2 b = new Book2();						//Book�� ��ü���� b����
		
		b.setTitle("� ����");						//�����ڸ� ���� title�Է�
		b.setAuthor("�������丮");						//�����ڸ� ���� author�Է�
		
		System.out.println("å ������ " + b.getTitle());		//å�� ���� ���
		System.out.println("���ڴ� " + b.getAuthor());			//å�� �� ���
	}

}
