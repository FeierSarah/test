package test5;
import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;
import javax.swing.*;
@SuppressWarnings("serial")
public class work extends JFrame {
	private JFrame jf=new JFrame("Calculator"); 
	private JPanel centerPanel=new JPanel();    
	private JPanel bottomPanel=new JPanel();   
	
	String[] nums={"7","8","9","+","4","5","6","-","1","2","3","*","0",".","=","/"};
	private JButton btn7=new JButton(nums[0]);
	private JButton btn8=new JButton(nums[1]);
	private JButton btn9=new JButton(nums[2]);
	private JButton btnAdd=new JButton(nums[3]);
	private JButton btn4=new JButton(nums[4]);
	private JButton btn5=new JButton(nums[5]);
	private JButton btn6=new JButton(nums[6]);
	private JButton btnMimus=new JButton(nums[7]);
	private JButton btn1=new JButton(nums[8]);
	private JButton btn2=new JButton(nums[9]);
	private JButton btn3=new JButton(nums[10]);
	private JButton btnMultipus=new JButton(nums[11]);
	private JButton btn0=new JButton(nums[12]);
	private JButton btnDot=new JButton(nums[13]);
	private JButton btnResult=new JButton(nums[14]);
	private JButton btnDivide=new JButton(nums[15]);
	
	private JTextField txt=new JTextField(15);
	private List<String>lists=new ArrayList<String>(); 
	
	public static void main(String[] args) throws Exception{
		new work().init();
	}
	
	public void init() throws Exception{
		bottomPanel.setLayout(new GridLayout(4,4,3,3)); 
		bottomPanel.add(btn7);
		bottomPanel.add(btn8);
		bottomPanel.add(btn9);
		bottomPanel.add(btnAdd);
		bottomPanel.add(btn4);
		bottomPanel.add(btn5);
		bottomPanel.add(btn6);
		bottomPanel.add(btnMimus);
		bottomPanel.add(btn1);
		bottomPanel.add(btn2);
		bottomPanel.add(btn3);
		bottomPanel.add(btnMultipus);
		bottomPanel.add(btn0);
		bottomPanel.add(btnDot);
		bottomPanel.add(btnResult);
		bottomPanel.add(btnDivide);
		
		jf.add(txt,BorderLayout.NORTH);   
		jf.add(centerPanel);              
		jf.add(bottomPanel,BorderLayout.SOUTH);  
	
		ActionListener numBtnListener=new ActionListener(){
			@Override
			public void actionPerformed(ActionEvent e) {
				String text=txt.getText();
				if("0".equals(text)){
					return;
				}
				if("".equals(text)){ 
					txt.setText(e.getActionCommand());
				}else{
					if(text.equals("+") || text.equals("-") || text.equals("*") || text.equals("/")){
						lists.add(text); 
						txt.setText("");
					}
					text+=e.getActionCommand();
					txt.setText(text);
				}
			}
		};
		btn1.addActionListener(numBtnListener);
		btn2.addActionListener(numBtnListener);
		btn3.addActionListener(numBtnListener);
		btn4.addActionListener(numBtnListener);
		btn5.addActionListener(numBtnListener);
		btn6.addActionListener(numBtnListener);
		btn7.addActionListener(numBtnListener);
		btn8.addActionListener(numBtnListener);
		btn9.addActionListener(numBtnListener);
		
		btn0.addActionListener(e->{
			String text=txt.getText();
			if("0".equals(text)){  
				return;
			}
			if("+".equals(text) || "-".equals(text) || "*".equals(text) || "/".equals(text)){
				lists.add(text);
				text="";  
			}
			text+=e.getActionCommand();
			txt.setText(text);
		});
		
		btnDot.addActionListener(e->{
			String text=txt.getText();
			if("".equals(text)){
				return;
			}
			if("+".equals(text) || "-".equals(text) || "*".equals(text) || "/".equals(text)){
				return;
			}
			if(text.contains(".")){
				return;
			}
			text+=e.getActionCommand();
			txt.setText(text); 
		});
		
		ActionListener operationBtnListener=new ActionListener(){
			@Override
			public void actionPerformed(ActionEvent e) {
				String text=txt.getText();
				if("".equals(text)){
					return;
				}
				if("+".equals(text) || "-".equals(text) || "*".equals(text) || "/".equals(text)){
					return;
				}
				lists.add(text);
				txt.setText("");
				txt.setText(e.getActionCommand());
			}
		};
		btnAdd.addActionListener(operationBtnListener);
		btnMimus.addActionListener(operationBtnListener);
		btnMultipus.addActionListener(operationBtnListener);
		btnDivide.addActionListener(operationBtnListener);
		
		ActionListener resultBtnListener=new ActionListener(){
			@Override
			public void actionPerformed(ActionEvent e) {
				if(lists.isEmpty()){
					return;
				}
				String text=txt.getText();
				if("".equals(txt) || "+".equals(text) || "-".equals(text) || "*".equals(text) || "/".equals(text)){
					return;
				}
				lists.add(text);
				if(lists.size()<3){
					return;
				}
				String one=lists.get(0);  
				String two=lists.get(1); 
				String three=lists.get(2); 
				switch(two){
				case "+":
					double i=Double.parseDouble(one);
					double j=Double.parseDouble(three);
					txt.setText((i+j)+""); 
					break;
				case "-":
					double x=Double.parseDouble(one);
					double y=Double.parseDouble(three);
					txt.setText((x-y)+""); 
					break;
					
				case "*":
					double a=Double.parseDouble(one);
					double b=Double.parseDouble(three);
					txt.setText((a*b)+"");
					break;
				case "/":
					double k=Double.parseDouble(one);
					double h=Double.parseDouble(three);
					txt.setText((k/h)+"");
					break;
				}
				lists.clear();
			}
		};
		btnResult.addActionListener(resultBtnListener);
		ImageIcon image=new ImageIcon("image/girl.jpg"); 
		image.setImage(image.getImage().getScaledInstance(30,30,Image.SCALE_DEFAULT));
		jf.setIconImage(image.getImage());
		UIManager.setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel");
		SwingUtilities.updateComponentTreeUI(jf.getContentPane());
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setLocation(400, 200); 
		jf.setResizable(false);   
		jf.pack();              
		jf.setVisible(true);  
	}
}
