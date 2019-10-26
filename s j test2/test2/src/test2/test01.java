package test2;

class Student{
	private String sno;
	private String cno;
	private String name;
	private String sex;
	private int age;
	public String getCno() {
		return cno;
	}
	public String setName(String name) {
		return name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public Student() {
		
	}
	public Student(String sno, String cno, String name, String sex , int age) {
		this.sno = sno;
		this.cno = cno;
		this.name = name;
		this.sex = sex;
		this.age = age;
	}
	public String toString() {
		String result = "��ͬѧ";
		result = result + "����Ϊ:" + name + " ";
		result = result + "���Ϊ:" + cno + " ";
		result = result + "ѧ��Ϊ:" + sno + " ";
		result = result + "�Ա�Ϊ:" + sex + " ";
		result = result + "ѧ��Ϊ:" + age;
		return result;
	}
}
public class test01 {
	public static void main(String[] args) {
		Student Student = new Student("0507", "�����171", "Sarah", "Ů" , 20);
		Student.setAge(21);
		System.out.println(Student.getAge());
		Student StudentB = new Student("0503", "�����172", "Lily", "Ů" , 21);
		System.out.println(StudentB.toString());
	}	
}
