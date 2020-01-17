package test5;

import java.awt.BorderLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingUtilities;


class ButO{
	public static void show(){
		JFrame frame=new JFrame("¿ò¼Ü");
		frame.setLayout(new BorderLayout());
		frame.setSize(400,250);
		frame.setLocation(250,250);
		frame.setVisible(true);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panel=new JPanel();
		JButton b1=new JButton("Ok");
		JButton b2=new JButton("Cancel");
		JButton b3=new JButton("Exit");
		
		JTextField text=new JTextField(12);
		JTextField text1=new JTextField(12);
		b1.addActionListener(e->{
			text.setText("Ok");
		});
		b2.addActionListener(e->{
			text1.setText("Cancel");
		});
		b3.addActionListener(e->{
			System.exit(0);
		});
		panel.add(b1);
		panel.add(b2);
		panel.add(b3);
		frame.add(text,BorderLayout.PAGE_START);
		frame.add(text1,BorderLayout.CENTER);
		frame.add(panel,BorderLayout.PAGE_END);
		}
}
public class FrameWork {
	public static void main(String[] args) {
		SwingUtilities.invokeLater(ButO::show);

	}

}
