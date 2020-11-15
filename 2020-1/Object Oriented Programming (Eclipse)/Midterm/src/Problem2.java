import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;

class MyLabel extends JLabel {										//���ڸ� ���� JLabel�� MyLabel�� �����Ѵ�.
	private Random rand1 = new Random();							//Color�� ������ R���� ���� ��ü rand1
	private Random rand2 = new Random();							//Color�� ������ G���� ���� ��ü rand2
	private Random rand3 = new Random();							//Color�� ������ B���� ���� ��ü rand3
	Color c = Color.WHITE;											//�ʱ� �������� Color.WHITE
	
	public MyLabel(String s) {
		setText(s);													//�Է¹��� ���ڿ��� �ؽ�Ʈ�� �ϴ� ���̺��� �����Ѵ�.
		setOpaque(true);											//Label�� ������ �������� �ʵ��� �Ѵ�.
		setBackground(c);											//������ c�� �����Ѵ�.
		addMouseListener(new MyMouseAdaptor());						//Mouse �����ʸ� ����Ѵ�.
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		setBackground(c);											//������ c�� �����Ѵ�.
	}
	
	class MyMouseAdaptor extends MouseAdapter {						//mouseClicked�� ����ϱ⿡ adaptor�� ����Ѵ�.
		public void mouseClicked(MouseEvent e) {					//���콺�� Ŭ�� �� ������ �̺�Ʈ�� �����ȴ�.
			c = new Color(rand1.nextInt(255), rand2.nextInt(255), rand3.nextInt(255));		//������ ���� c�� �����Ѵ�.
			repaint();												//Label�� �ٽ� ��ĥ�Ѵ�.
		}
	}
}

class MyPanel extends JPanel {
	public MyPanel() {
		setLayout(new GridLayout(4,3));								//Panel�� ��ġ�����ڸ� GridLayout���� �����Ѵ�.
				
		add(new MyLabel("0"));										//MyLabel 12���� �гο� �����Ѵ�.
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
		setSize(600, 400);											//�������� ũ�⸦ �����Ѵ�.
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);				//�������� close ��ư�� ������ ���α׷��� �����Ѵ�.
		setTitle("3x4 Color Frame");								//�������� ������ �����Ѵ�.
		setVisible(true);											//�������� ȭ�鿡 ��Ÿ���� �Ѵ�.
		
		JPanel panel = new MyPanel();								//MyPanel ��ü panel�� �����Ѵ�.
		add(panel);													//panel�� �����ӿ� �����Ѵ�.
	}
}
public class Problem2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MyFrame f = new MyFrame();									//MyFrame��ü�� �����Ѵ�.
	}

}
