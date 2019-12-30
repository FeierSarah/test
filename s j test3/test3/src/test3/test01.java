package test3;

class Person {
	protected String name;
	protected String gender;
	protected int age;
	public Person(String name,String gender,int age) {
		this.name = name;
		this.gender = gender;
		this.age = age;
	}
	public Person() {
		
	}
	public String display() {
		String result="";
		result="����:"+name+";";
		result=result+"�Ա�:"+gender+";";
		result=result+"����:"+age+"��;";
		return result;
	}
}
class Student extends Person {
	private String id;
	private String cname;
	private int score;
	public Student(String name,String gender,int age,String id,String cname,int score) {
		super(name,gender,age);
		this.id = id;
		this.cname = cname;
		this.score = score;
	}
	public Student() {
		
	}
	public String display() {
		String result=super.display();
		result=result+"ѧ��:"+id+";";
		result=result+"����:"+cname+";";
		result=result+"�ɼ�:"+score;
		return result;
	}
}
public class test01 {
	public static void main(String[] args) {
		Student s = new Student("ŷ����","Ů",21,"201706060507","��171",95);
		System.out.println(s.display());
	}
}
