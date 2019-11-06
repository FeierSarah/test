package calculator;

import java.awt.*;
import javax.swing.*;
public class Calculator extends JFrame {
	private static final long serialVersionUID = -427616030422311828L;
	public JPanel panel1;
	public JPanel panel2;
	public JButton[] bts1;
	public JButton[] bts2;
	public JTextField textField;
	public Calculator() {
		setTitle("计算器");
		setSize(470, 680);
		setLayout(null);
		setLocationRelativeTo(null); 
		setDefaultCloseOperation(EXIT_ON_CLOSE); 
		
		Container container = getContentPane(); 
        container.setLayout(new BorderLayout(50, 250)); 
		panel1 = new JPanel();
		panel2 = new JPanel(); 
		container.add(panel1, BorderLayout.NORTH);
        container.add(panel2, BorderLayout.CENTER); 
        
        textField = new JTextField();  
        textField.setFont(new Font("宋体", Font.PLAIN, 16));
        textField.setHorizontalAlignment (JTextField.RIGHT);
        
        panel1.setSize(300, 40);
		panel1.setLocation(10, 5);
		panel1.setLayout(new GridLayout(1, 4));
		String[] strs1={"查找","编辑","帮助","标准"};
		bts1=new JButton[4];
		for(int i=0;i<bts1.length;i++)
		{
			bts1[i]=new JButton(strs1[i]);
			bts1[i].setFont(new Font("宋体", Font.PLAIN, 12));
			panel1.add(bts1[i]);
		}
		
        String[] strs2 = {"MC","MR","M+","M-","MS",
        		"CE","C","←","#","%",
				"7", "8", "9", "/", "√",
				"4", "5", "6", "*","^",
				"1", "2", "3", "-","1/x",
				"+/-", "0", ".", "+","="};
        bts2=new JButton[30];
        panel2.setLayout(new GridLayout(6, 5, 6, 5));
		for (int i = 0; i <  bts2.length; i++) {
			bts2[i]=new JButton(strs2[i]);
			if(i==10||i==11||i==12||
					i==15||i==16||i==17||
					i==20||i==21||i==22||i==26)
				bts2[i].setFont(new Font("黑体",Font.PLAIN, 28));
			else if(i<5)
				bts2[i].setFont(new Font("黑体",Font.PLAIN, 18));
			else
				bts2[i].setFont(new Font("仿宋",Font.PLAIN, 20));
			panel2.add(bts2[i]);
		}
    }
    public static void main(String[] args) {
		new Calculator().setVisible(true);;
    }
}
