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
		result="姓名:"+name+";";
		result=result+"性别:"+gender+";";
		result=result+"年龄:"+age+"岁;";
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
		result=result+"学号:"+id+";";
		result=result+"班名:"+cname+";";
		result=result+"成绩:"+score;
		return result;
	}
}
public class test01 {
	public static void main(String[] args) {
		Student s = new Student("欧阳慧","女",21,"201706060507","计171",95);
		System.out.println(s.display());
	}
}
