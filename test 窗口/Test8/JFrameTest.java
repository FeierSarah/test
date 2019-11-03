import java.awt.*;
import javax.swing.*;
public class JFrameTest extends JFrame
{
	//定义窗口中包含的控件
	public JLabel userLa;
	public JLabel passLa;
	public JTextField userTxt;
	public JPasswordField passTxt;
	public JButton sureBt;
	public JButton quitBt;
	
	public JFrameTest()
	{
		setSize(300,230);//设置窗口大小
		setTitle("测试窗口");//设置窗口标题
		//以下代码用户创建控件对象，并添加到窗口中
		/*userLa=new JLabel("用户名");
		this.add(userLa,BorderLayout.NORTH);
		passLa=new JLabel("密    码");
		this.add(passLa,BorderLayout.SOUTH);
		userTxt=new JTextField();
		this.add(userTxt,BorderLayout.EAST);
		passTxt=new JPasswordField();
		this.add(passTxt,BorderLayout.WEST);
		sureBt=new JButton("登录");
		this.add(sureBt,BorderLayout.CENTER);
		//quitBt=new JButton("退出");
		//this.add(quitBt);*/
		
		/*this.setLayout(new FlowLayout());
		//将窗口的布局方式改为流布局方式
		userLa=new JLabel("用户名");
		this.add(userLa);
		passLa=new JLabel("密    码");
		this.add(passLa);
		userTxt=new JTextField();
		this.add(userTxt);
		passTxt=new JPasswordField();
		this.add(passTxt);
		sureBt=new JButton("登录");
		this.add(sureBt);
		quitBt=new JButton("退出");
		this.add(quitBt);*/
		
		/*this.setLayout(new GridLayout(3,2));
		//将窗口的布局方式改为表格布局方式
		userLa=new JLabel("用户名");
		this.add(userLa);
		passLa=new JLabel("密    码");
		this.add(passLa);
		userTxt=new JTextField();
		this.add(userTxt);
		passTxt=new JPasswordField();
		this.add(passTxt);
		sureBt=new JButton("登录");
		this.add(sureBt);
		quitBt=new JButton("退出");
		this.add(quitBt);*/
		
		this.setLayout(null);
		//取消窗口的布局方式
		userLa=new JLabel("用户名");
		userLa.setSize(60, 30);
		userLa.setLocation(30, 30);
		this.add(userLa);
		passLa=new JLabel("密    码");
		passLa.setSize(60, 30);
		passLa.setLocation(30, 80);
		this.add(passLa);
		userTxt=new JTextField();
		userTxt.setSize(120, 30);
		userTxt.setLocation(110, 30);
		this.add(userTxt);
		passTxt=new JPasswordField();
		passTxt.setSize(120, 30);
		passTxt.setLocation(110, 80);
		this.add(passTxt);
		sureBt=new JButton("登录");
		sureBt.setSize(60, 30);
		sureBt.setLocation(50, 130);
		this.add(sureBt);
		quitBt=new JButton("退出");
		quitBt.setSize(60, 30);
		quitBt.setLocation(130, 130);
		this.add(quitBt);
		
		
		setVisible(true);//设置窗口可见
	}
}
