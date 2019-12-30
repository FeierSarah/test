package test;
class Person {
	protected String name;
	protected String address;
	protected String phone;
	protected String iaddress;
	public Person(String name,String address,String phone,String iaddress) {
		this.name = name;
		this.address = address;
		this.phone = phone;
		this.iaddress = iaddress;
	}
	public Person() {
		
	}
	public String toString() {
		String result="";
		result="����:"+name+";";
		result=result+"��ַ:"+address+";";
		result=result+"�绰:"+phone+";";
		result=result+"�����ʼ���ַ:"+iaddress+";";
		return result;
	}
}
class Student extends Person {
	private String cla;
	public Student(String name,String address,String phone,String iaddress,int cno) {
		super(name,address,phone,iaddress);
		String[] Cla = {"һ�꼶","���꼶","���꼶","���꼶"};
		this.cla = Cla[cno - 1];
	}
	public Student() {
		
	}
	public String toString() {
		String result=super.toString();
		result=result+"�༶״̬:"+cla;
		return result;
	}
}
class MyDate{
	private int year;
	private int month;
	private int day;
	public MyDate(int year,int month,int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}
	public MyDate() {
		
	}
	public String toString() {
		return year + "��" + month + "��" + day + "��";
	}
}
class Employee extends Person {
	protected String office;
	protected double account;
	protected String time;
	public Employee(String name,String address,String phone,String iaddress,String office,double account,int year,int month,int day) {
		super(name,address,phone,iaddress);
		this.office = office;
		this.account = account;
		MyDate a = new MyDate(year,month,day);
		this.time = a.toString();
	}
	public Employee () {
		
	}
	public String toString() {
		String result=super.toString();
		result=result+"�칫��:"+office+";";
		result=result+"����:"+account+";";
		result=result+"��Ƹ����:"+time;
		return result;
	}
}
class Faculty extends Employee {
	private int ftime;
	private int jibie;
	public Faculty (String name,String address,String phone,String iaddress,String office,double account,int year,int month,int day,int ftime,int jibie) {
		super(name,address,phone,iaddress,office,account,year,month,day);
		this.ftime = ftime;
		this.jibie = jibie;
	}
	public Faculty () {
		
	}
	public String toString() {
		String result=super.toString();
		result=result+"�칫ʱ��:"+ftime+"Сʱ;";
		result=result+"����:"+jibie+"��";
		return result;
	}
}
class Staff extends Employee {
	private String sname;
	public Staff (String name,String address,String phone,String iaddress,String office,double account,int year,int month,int day,String sname) {
		super(name,address,phone,iaddress,office,account,year,month,day);
		this.sname = sname;
	}
	public Staff () {
		
	}
	public String toString() {
		String result=super.toString();
		result=result+"ְ��ƺ�:"+sname;
		return result;
	}
}
public class test02 {
	public static void main(String[] args) {
		Student s = new Student("ŷ����","7B-119","15100000000","201706060507@sust.com",3);
		System.out.println(s.toString());
		Faculty f = new Faculty("����","��԰С��","13800000000","zhangsan@sust.com","2a-401",9000,2017,9,6,8,2);
		System.out.println(f.toString());
		Staff s1 = new Staff("����","��԰С��","13500000000","lisi@sust.com","2a-402",8000,2018,9,18,"�߼���ʦ");
		System.out.println(s1.toString());
	}
}
