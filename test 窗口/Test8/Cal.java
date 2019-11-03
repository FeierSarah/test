import java.awt.*;
import javax.swing.*;
public class Cal extends JFrame{

	public JPanel panel1;
	public JButton[] bts1;
	
	public Cal()
	{
		setSize(600,4000);//设置窗口大小
		setTitle("计算器");//设置窗口标题
		setLayout(null);
		panel1=new JPanel();
		panel1.setSize(300, 200);
		panel1.setLocation(30, 30);
		panel1.setLayout(new GridLayout(2,4));
		String[] strs1={"1","2","3","4","5","6","7","8"};
		bts1=new JButton[8];
		for(int i=0;i<bts1.length;i++)
		{
			bts1[i]=new JButton(strs1[i]);
			panel1.add(bts1[i]);
		}
		this.add(panel1);
		setVisible(true);//设置窗口可见
	}
}
