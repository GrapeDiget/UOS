import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class MyPanel2 extends JPanel {											//마우스의 움직임에 따라 변하는 JPanel인 MyPanel2를 정의한다. 
	int x = 0;															//마우스의 x좌표를 나타내는 x
	int y = 0;															//마우스의 y좌표를 나타내는 y
	Color c;															//JLabel의 바탕색을 나타내는 Color객체 c 
	
	public MyPanel2() {
		JLabel label = new JLabel("No Mouse Event");					//처음 실행되면 JLabel 객체 label의 텍스트에 "No Mouse Event"가 표시된다.
		add(label);														//label을 MyPanel2에 부착한다.
		
		addMouseListener(new MouseAdapter() {							//마우스의 이벤트를 감지하기 위해 MouseListener를 추가한다.
			public void mousePressed(MouseEvent e) {					//마우스가 눌려지면 발생하는 이벤트
				x = e.getX();											
				y = e.getY();
				label.setText("MousePressed (" + x + "," + y + ")");	//마우스 커서의 x, y좌표를 얻어서 label의 텍스트에 입력한다.
			}
	
			public void mouseReleased(MouseEvent e) {					//마우스가 떼어지면 발생하는 이벤트
				x = e.getX();
				y = e.getY();
				label.setText("MouseReleased (" + x + "," + y + ")");	//마우스 커서의 x, y좌표를 얻어서 label의 텍스트에 입력한다.
			}
	
			public void mouseEntered(MouseEvent e) {					//마우스 커서가 패널에 들어오면 발생하는 이벤트
				c=Color.cyan;											//c를 청록색으로 수정한다.
				repaint();												//패널을 다시 그린다
			}
	
			public void mouseExited(MouseEvent e) {						//마우스 커서가 패널에서 나가면 발생하는 이벤트
				c=Color.yellow;											//c를 노란색으로 수정한다.
				repaint();												//패널을 다시 그린다.
			}
		});
		addMouseMotionListener(new MouseMotionListener() {				//마우스의 움직임을 감지하기 위해 MouseMotionListener를 추가한다.
			public void mouseDragged(MouseEvent e) {					//마우스가 드래그되면 발생하는 이벤트
				x = e.getX();
				y = e.getY();
				label.setText("MouseDragged (" + x + "," + y + ")");	//마우스 커서의 x, y좌표를 얻어서 label의 텍스트에 입력한다.
			}
	
			public void mouseMoved(MouseEvent e) {						//마우스가 클릭되지 않고 움직이면 발생하는 이벤트
				x = e.getX();
				y = e.getY();
				label.setText("MouseMoved (" + x + "," + y + ")");		//마우스 커서의 x, y좌표를 얻어서 label의 텍스트에 입력한다.
			}
		});
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		setBackground(c);												//배경색을 c로 설정한다.
	}

	
}

class MyFrame2 extends JFrame {
	public MyFrame2() {
		setSize(600, 300);												//프레임의 크기를 지정한다.
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);					//프레임의 close 버튼을 누르면 프로그램을 종료한다.
		setTitle("MouseListener와 MouseMotionListener 예제");				//프레임의 제목을 설정한다.
		setVisible(true);												//프레임을 화면에 나타나게 한다.
		
		add(new MyPanel2());											//MyPanel2를 프레임에 부착한다.
	}
}

public class Problem3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyFrame2 f = new MyFrame2();									//MyFrame2객체를 생성한다.
	}

}
