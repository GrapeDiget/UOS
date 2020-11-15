import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

class MyLabel extends JLabel {										//숫자를 담은 JLabel인 MyLabel을 정의한다.
	private Random rand1 = new Random();							//Color의 무작위 R값을 위한 객체 rand1
	private Random rand2 = new Random();							//Color의 무작위 G값을 위한 객체 rand2
	private Random rand3 = new Random();							//Color의 무작위 B값을 위한 객체 rand3
	Color c = Color.WHITE;											//초기 바탕색은 Color.WHITE
	
	public MyLabel(String s) {
		setText(s);													//입력받은 문자열을 텍스트로 하는 레이블을 생성한다.
		setOpaque(true);											//Label의 배경색을 투명하지 않도록 한다.
		setBackground(c);											//배경색을 c로 설정한다.
		addMouseListener(new MyMouseAdaptor());						//Mouse 리스너를 등록한다.
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		setBackground(c);											//배경색을 c로 설정한다.
	}
	
	class MyMouseAdaptor extends MouseAdapter {						//mouseClicked만 사용하기에 adaptor를 사용한다.
		public void mouseClicked(MouseEvent e) {					//마우스가 클릭 될 때마다 이벤트가 생성된다.
			c = new Color(rand1.nextInt(255), rand2.nextInt(255), rand3.nextInt(255));		//랜덤한 색을 c에 배정한다.
			repaint();												//Label을 다시 색칠한다.
		}
	}
}

class MyPanel extends JPanel {
	public MyPanel() {
		setLayout(new GridLayout(4,3));								//Panel의 배치관리자를 GridLayout으로 설정한다.
				
		add(new MyLabel("0"));										//MyLabel 12개를 패널에 부착한다.
		add(new MyLabel("1"));
		add(new MyLabel("2"));
		add(new MyLabel("3"));
		add(new MyLabel("4"));
		add(new MyLabel("5"));
		add(new MyLabel("6"));
		add(new MyLabel("7"));
		add(new MyLabel("8"));
		add(new MyLabel("9"));
		add(new MyLabel("10"));
		add(new MyLabel("11"));
	}
}
class MyFrame extends JFrame {
	public MyFrame() {
		setSize(600, 400);											//프레임의 크기를 지정한다.
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);				//프레임의 close 버튼을 누르면 프로그램을 종료한다.
		setTitle("3x4 Color Frame");								//프레임의 제목을 설정한다.
		setVisible(true);											//프레임을 화면에 나타나게 한다.
		
		JPanel panel = new MyPanel();								//MyPanel 객체 panel을 생성한다.
		add(panel);													//panel을 프레임에 부착한다.
	}
}
public class Problem2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyFrame f = new MyFrame();									//MyFrame객체를 생성한다.
	}

}
