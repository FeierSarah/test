package test5;

import java.awt.BorderLayout;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JFrame;
import javax.swing.SwingUtilities;

class MouseL{
	public static void show(){
		JFrame frame=new JFrame("鼠标位置");
		frame.setLayout(new BorderLayout());
		frame.setSize(10000,10000);
		frame.setLocation(250,250);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		frame.addMouseListener(new MouseListener(){
			public void mouseClicked(MouseEvent e) {
				System.out.println(e.getLocationOnScreen());
			}
			public void mouseEntered(MouseEvent arg0) {
				// TODO 自动生成的方法存根
			}
			public void mouseExited(MouseEvent arg0) {
				// TODO 自动生成的方法存根
			}
			public void mousePressed(MouseEvent arg0) {
				// TODO 自动生成的方法存根
			}
			public void mouseReleased(MouseEvent arg0) {
				// TODO 自动生成的方法存根
			}
		});
		}
}
public class MouseLocation {
	public static void main(String[] args) {
		SwingUtilities.invokeLater(MouseL::show);
	}

}
