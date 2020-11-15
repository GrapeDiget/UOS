import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class MyPanel2 extends JPanel {											//���콺�� �����ӿ� ���� ���ϴ� JPanel�� MyPanel2�� �����Ѵ�. 
	int x = 0;															//���콺�� x��ǥ�� ��Ÿ���� x
	int y = 0;															//���콺�� y��ǥ�� ��Ÿ���� y
	Color c;															//JLabel�� �������� ��Ÿ���� Color��ü c 
	
	public MyPanel2() {
		JLabel label = new JLabel("No Mouse Event");					//ó�� ����Ǹ� JLabel ��ü label�� �ؽ�Ʈ�� "No Mouse Event"�� ǥ�õȴ�.
		add(label);														//label�� MyPanel2�� �����Ѵ�.
		
		addMouseListener(new MouseAdapter() {							//���콺�� �̺�Ʈ�� �����ϱ� ���� MouseListener�� �߰��Ѵ�.
			public void mousePressed(MouseEvent e) {					//���콺�� �������� �߻��ϴ� �̺�Ʈ
				x = e.getX();											
				y = e.getY();
				label.setText("MousePressed (" + x + "," + y + ")");	//���콺 Ŀ���� x, y��ǥ�� �� label�� �ؽ�Ʈ�� �Է��Ѵ�.
			}
	
			public void mouseReleased(MouseEvent e) {					//���콺�� �������� �߻��ϴ� �̺�Ʈ
				x = e.getX();
				y = e.getY();
				label.setText("MouseReleased (" + x + "," + y + ")");	//���콺 Ŀ���� x, y��ǥ�� �� label�� �ؽ�Ʈ�� �Է��Ѵ�.
			}
	
			public void mouseEntered(MouseEvent e) {					//���콺 Ŀ���� �гο� ������ �߻��ϴ� �̺�Ʈ
				c=Color.cyan;											//c�� û�ϻ����� �����Ѵ�.
				repaint();												//�г��� �ٽ� �׸���
			}
	
			public void mouseExited(MouseEvent e) {						//���콺 Ŀ���� �гο��� ������ �߻��ϴ� �̺�Ʈ
				c=Color.yellow;											//c�� ��������� �����Ѵ�.
				repaint();												//�г��� �ٽ� �׸���.
			}
		});
		addMouseMotionListener(new MouseMotionListener() {				//���콺�� �������� �����ϱ� ���� MouseMotionListener�� �߰��Ѵ�.
			public void mouseDragged(MouseEvent e) {					//���콺�� �巡�׵Ǹ� �߻��ϴ� �̺�Ʈ
				x = e.getX();
				y = e.getY();
				label.setText("MouseDragged (" + x + "," + y + ")");	//���콺 Ŀ���� x, y��ǥ�� �� label�� �ؽ�Ʈ�� �Է��Ѵ�.
			}
	
			public void mouseMoved(MouseEvent e) {						//���콺�� Ŭ������ �ʰ� �����̸� �߻��ϴ� �̺�Ʈ
				x = e.getX();
				y = e.getY();
				label.setText("MouseMoved (" + x + "," + y + ")");		//���콺 Ŀ���� x, y��ǥ�� �� label�� �ؽ�Ʈ�� �Է��Ѵ�.
			}
		});
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		setBackground(c);												//������ c�� �����Ѵ�.
	}

	
}

class MyFrame2 extends JFrame {
	public MyFrame2() {
		setSize(600, 300);												//�������� ũ�⸦ �����Ѵ�.
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);					//�������� close ��ư�� ������ ���α׷��� �����Ѵ�.
		setTitle("MouseListener�� MouseMotionListener ����");				//�������� ������ �����Ѵ�.
		setVisible(true);												//�������� ȭ�鿡 ��Ÿ���� �Ѵ�.
		
		add(new MyPanel2());											//MyPanel2�� �����ӿ� �����Ѵ�.
	}
}

public class Problem3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyFrame2 f = new MyFrame2();									//MyFrame2��ü�� �����Ѵ�.
	}

}
