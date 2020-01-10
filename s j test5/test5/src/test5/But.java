package test5;
import java.awt.*;
import javax.swing.*;

class Border{
	public static void create() {
		JFrame f=new JFrame("GUI");
		f.setSize(300, 200);
		f.setLocation(300, 200);
		f.setLayout(new FlowLayout(FlowLayout.LEFT,20,30));
		JButton But1 = (JButton) f.add(new JButton("But1"));
		f.add(new JButton("But2"));
		f.add(new JButton("But3"));
		f.add(new JButton("But4"));
		f.add(new JButton("But5"));
		f.add(new JButton("But6"));
		But1.addActionListener(e->{
			System.exit(0);
		});
		f.setVisible(true);
		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		}
}
public class But {

	public static void main(String[] args) {
		SwingUtilities.invokeLater(Border::create);

	}

}
